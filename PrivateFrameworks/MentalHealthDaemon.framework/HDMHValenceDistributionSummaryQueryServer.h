
@interface HDMHValenceDistributionSummaryQueryServer : HDQueryServer {
    HKMHValenceDistributionSummaryQueryConfiguration * _configuration;
    NSCalendar * _gregorianCalendar;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; })_dayIndexRangeWithAnchorIndex:(long long)arg1;
- (void)_queue_start;
- (bool)_queue_surfaceValenceDistributionSummariesWithError:(id*)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;

@end
