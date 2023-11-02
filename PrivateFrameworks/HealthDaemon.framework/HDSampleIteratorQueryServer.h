
@interface HDSampleIteratorQueryServer : HDBatchedQueryServer {
    unsigned long long  _deliveredResultCount;
    unsigned long long  _limit;
    HKSampleIteratorQueryCursor * _queryCursor;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;

@end
