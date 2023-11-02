
@interface HDQuantitySeriesSampleQueryServer : HDQueryServer {
    long long  _batchThreshold;
    long long  _lastDatumIndex;
    NSDate * _latestDeliveredSampleStartDate;
    NSUUID * _latestDeliveredUUID;
    NSDate * _maximumDeliveredStartDate;
    long long  _mode;
    unsigned long long  _options;
    HKQuantitySample * _sample;
    id /* block */  _unitTest_batchWillDeliver;
}

@property (nonatomic, copy) id /* block */ unitTest_batchWillDeliver;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)setUnitTest_batchWillDeliver:(id /* block */)arg1;
- (id /* block */)unitTest_batchWillDeliver;
- (void)unitTest_setBatchThreshold:(long long)arg1;

@end
