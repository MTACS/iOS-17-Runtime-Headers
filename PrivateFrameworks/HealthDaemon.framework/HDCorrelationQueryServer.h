
@interface HDCorrelationQueryServer : HDBatchedQueryServer {
    NSDictionary * _dataFilters;
    bool  _permitPartiallyFilteredCorrelations;
    bool  _suspended;
}

@property (nonatomic, readonly) NSDictionary *dataFilters;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)dataFilters;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
