
@interface BPSAggregations : NSObject

+ (id)approxPercentile;
+ (id)approxPercentileWithDigestCapacity:(unsigned long long)arg1;
+ (id)approximateDistinctCount;
+ (id)avg;
+ (id)count;
+ (id)max;
+ (id)min;
+ (id)sum;

@end
