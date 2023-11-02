
@interface FedStatsDataCohort : NSObject {
    NSDictionary * _namespaceMap;
}

@property (nonatomic, readonly) NSDictionary *namespaceMap;

+ (bool)checkCohortField:(id)arg1 forNamespaceID:(id)arg2;
+ (id)keysForCohorts:(id)arg1 namespaceID:(id)arg2 parameters:(id)arg3 possibleError:(id*)arg4;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)namespaceMap;

@end
