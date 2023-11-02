
@interface HDStatisticsQueryServer : HDQueryServer {
    NSDateInterval * _dateInterval;
    unsigned long long  _mergeStrategy;
    HKQuantityType * _quantityType;
    unsigned long long  _statisticsOptions;
}

@property (nonatomic, readonly) unsigned long long mergeStrategy;
@property (nonatomic, readonly) unsigned long long statisticsOptions;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (unsigned long long)mergeStrategy;
- (id)quantityType;
- (unsigned long long)statisticsOptions;

@end
