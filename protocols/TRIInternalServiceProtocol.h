
@protocol TRIInternalServiceProtocol

@required

- (bool)deregisterNamespaceWithNamespaceName:(NSString *)arg1 withTeamId:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)dynamicNamespaceRecordsWithError:(id*)arg1;
- (NSArray *)experimentNotificationsWithExperimentId:(NSString *)arg1 cloudKitContainer:(int)arg2 teamId:(NSString *)arg3 error:(id*)arg4;
- (bool)immediatelySchedulePostUpgradeActivityWithError:(id*)arg1;
- (NSDate *)lastFetchDateForContainer:(int)arg1 teamId:(NSString *)arg2 error:(id*)arg3;
- (bool)registerNamespaceWithNamespaceName:(NSString *)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(NSURL *)arg3 withTeamId:(NSString *)arg4 appContainerId:(NSString *)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 error:(id*)arg8;
- (bool)removeUnusedChannels:(id*)arg1;
- (bool)resumeSQLiteCKDatabaseQueueWithError:(id*)arg1;
- (TRIClientRolloutArtifact *)rolloutNotificationWithLatestDeploymentForRolloutId:(NSString *)arg1 cloudKitContainer:(int)arg2 teamId:(NSString *)arg3 error:(id*)arg4;
- (bool)setFailureInjectionDelegate:(TRISQLiteCKDatabaseFailureInjectionDelegate *)arg1 error:(id*)arg2;
- (bool)setLastFetchDate:(NSDate *)arg1 forContainer:(int)arg2 teamId:(NSString *)arg3 error:(id*)arg4;
- (bool)setSubscription:(NSArray *)arg1 namespaceName:(NSString *)arg2 error:(id*)arg3;
- (bool)startNamespaceDownloadWithName:(NSString *)arg1 withTeamId:(NSString *)arg2 options:(TRIDownloadOptions *)arg3 error:(id*)arg4;
- (bool)submitTask:(id <TRITask>)arg1 options:(TRITaskQueuingOptions *)arg2 error:(id*)arg3;
- (NSArray *)subscriptionForNamespaceName:(NSString *)arg1 error:(id*)arg2;
- (bool)suspendSQLiteCKDatabaseQueueWithError:(id*)arg1;
- (NSArray *)taskRecordsWithError:(id*)arg1;

@end
