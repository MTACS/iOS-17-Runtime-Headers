
@protocol ProxyAnalyticsDelegate <NSObject>

@optional

- (void)donateBiomeEventForEdgeSelectionWithPrefixComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)performAppEndpointTrackingPeriodicTasksComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)performAppExperiencePeriodicTasksComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)performAppPeriodicTasksComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)performAppTrackingPeriodicTasksComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)performPersistentStoreHealthCheckComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)proxyAnalyticsTrainAndScoreComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)proxyAnalyticsTrainAndScoreInterrupted;

@end
