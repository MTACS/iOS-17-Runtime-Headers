
@interface HDSampleQueryServer : HDBatchedQueryServer {
    bool  _includeAutomaticTimeZones;
    bool  _includeContributorInformation;
    unsigned long long  _limit;
    NSArray * _queryDescriptors;
    NSArray * _sortDescriptors;
    bool  _suspended;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)diagnosticDescription;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;
- (bool)validateConfiguration:(id*)arg1;

@end
