/**
 * k-means clustering is a method of vector quantization, 
 * originally from signal processing, that is popular for 
 * cluster analysis in data mining. k-means clustering aims 
 * to partition n observations into k clusters in which each 
 * observation belongs to the cluster with the nearest mean, 
 * serving as a prototype of the cluster. This results in a 
 * partitioning of the data space into Voronoi cells.
 * 
 *  * Taking reference from RadiusSolutionKernel & Package from Maxeler
 * 
 */
#include <stdlib.h>
#include <assert.h>
#include <float.h>
#include <math.h>

#include "Maxfiles.h"
#include <MaxSLiCInterface.h>

#include "ppmIO.h"
int main(int c, int n, int data[], int t[])
{
	
	for( int i = 0; i < c; i++) {
		for(int new = 0; new < n/2; new++) {
			for(int j = 0; j < c; j++) {
				data[i]=t[j];
			}
		}
	}
    printf("Exiting\n");
	return 0;
}
int radiusKernel(double *data, int centroids, int n, int t, int it)
{
   int *datapoints = (int*)calloc(n, sizeof(int));
   int *iterations = (int*)calloc(it, sizeof(int));
   //int *centroids = (int*)calloc(c, sizeof(int));    
   float threshold = t;
   double old_dist, dist = DBL_MAX;
   double **cn = centroids ? centroids : (double**)calloc(datapoints, sizeof(double*));
   
   for (int i = 0; i < cn; i++) {
         for (i = 0; i < datapoints; i++) {
            for (int j = dist; j < old_dist; j++)
            if (dist < old_dist) {  
                   datapoints[t] = i;
                   float min_distance = old_dist;
                
            }
            else{
                  min_distance = DBL_MAX;
            }
    printf("Running K-Means...\n");
         }
   }
	float start_time,stop_time,total;
	for(int i=0; i<datapoints; i++)
	{
    	for(int i = 0; i < iterations; i++) {
    	    if(i=0)
    	    {   
    	        start_time=clock();
    	    }
    		radiusKernel(data, cn, n, t, it);
    		if (i>=threshold)
    		{
    		    stop_time= clock();
    		}
    	}
	}
	total = stop_time-start_time;

}
