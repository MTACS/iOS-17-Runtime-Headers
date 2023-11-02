
@interface HDHRAFibBurdenHistogramQueryServer : HDQueryServer {
    HKHRAFibBurdenAnalyzer * _analyzer;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (id)_makeEmptyHistogramResult;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;

@end
