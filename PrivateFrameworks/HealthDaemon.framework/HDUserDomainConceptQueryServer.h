
@interface HDUserDomainConceptQueryServer : HDQueryServer {
    HKQueryAnchor * _anchor;
    long long  _limit;
    NSArray * _sortDescriptors;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
