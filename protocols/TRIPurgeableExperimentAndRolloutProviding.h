
@protocol TRIPurgeableExperimentAndRolloutProviding <NSObject>

@required

- (NSDictionary *)purgeableExperimentAssetsFromNamespaces:(NSSet *)arg1 eagerFactors:(NSDictionary *)arg2 overriddenFactors:(NSDictionary *)arg3;
- (NSSet *)purgeableExperimentsFromNamespaces:(NSSet *)arg1 eagerFactors:(NSDictionary *)arg2 overriddenFactors:(NSDictionary *)arg3;
- (NSDictionary *)purgeableRolloutAssetsFromNamespaces:(NSSet *)arg1 eagerFactors:(NSDictionary *)arg2 overriddenFactors:(NSDictionary *)arg3;
- (NSSet *)purgeableRolloutsFromNamespaces:(NSSet *)arg1 eagerFactors:(NSDictionary *)arg2 overriddenFactors:(NSDictionary *)arg3;

@end
