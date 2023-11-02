
@interface HDQuantityDistributionCalculator : NSObject {
    struct HistogramState { 
        struct vector<HistogramBucket, std::allocator<HistogramBucket>> { 
            struct HistogramBucket {} *__begin_; 
            struct HistogramBucket {} *__end_; 
            struct __compressed_pair<HistogramBucket *, std::allocator<HistogramBucket>> { 
                struct HistogramBucket {} *__value_; 
            } __end_cap_; 
        } _dateBuckets; 
        double _histogramBucketAnchor; 
        double _histogramBucketSize; 
        long long _currentStartDateBucket; 
    }  _histogramState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDataPoint:(double)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 histogramBucketAnchor:(double)arg5 histogramBucketSize:(double)arg6;
- (id)quantityDistributionsWithUnit:(id)arg1;
- (bool)validateDateSequenceForTesting:(id)arg1;

@end
