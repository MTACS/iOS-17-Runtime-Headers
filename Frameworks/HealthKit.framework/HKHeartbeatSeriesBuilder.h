
@interface HKHeartbeatSeriesBuilder : HKSeriesBuilder {
    unsigned long long  _count;
    double  _lastHeartbeatTimeInterval;
    NSMutableData * _mutableHeartbeats;
    NSMutableDictionary * _mutableMetadata;
    NSDate * _startDate;
}

+ (unsigned long long)maximumCount;

- (void).cxx_destruct;
- (void)_resourceQueue_addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(bool)arg2 completion:(id /* block */)arg3;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_finishSeriesWithCompletion:(id /* block */)arg1;
- (void)addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(bool)arg2 completion:(id /* block */)arg3;
- (void)addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)discard;
- (void)finishSeriesWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1 device:(id)arg2 startDate:(id)arg3;

@end
