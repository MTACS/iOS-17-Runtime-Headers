
@interface TRIXPCInternalServiceClient : NSObject <TRIInternalServiceProtocol> {
    _PASXPCClientHelper * _helper;
}

- (void).cxx_destruct;
- (bool)_performSyncXpcWithError:(id*)arg1 block:(id /* block */)arg2;
- (bool)deregisterNamespaceWithNamespaceName:(id)arg1 withTeamId:(id)arg2 error:(id*)arg3;
- (id)dynamicNamespaceRecordsWithError:(id*)arg1;
- (id)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 error:(id*)arg4;
- (bool)immediatelySchedulePostUpgradeActivityWithError:(id*)arg1;
- (id)init;
- (id)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 error:(id*)arg3;
- (bool)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 withTeamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 error:(id*)arg8;
- (bool)removeUnusedChannels:(id*)arg1;
- (bool)resumeSQLiteCKDatabaseQueueWithError:(id*)arg1;
- (id)rolloutNotificationWithLatestDeploymentForRolloutId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 error:(id*)arg4;
- (bool)setFailureInjectionDelegate:(id)arg1 error:(id*)arg2;
- (bool)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 error:(id*)arg4;
- (bool)setSubscription:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3;
- (bool)startNamespaceDownloadWithName:(id)arg1 withTeamId:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)submitTask:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)subscriptionForNamespaceName:(id)arg1 error:(id*)arg2;
- (bool)suspendSQLiteCKDatabaseQueueWithError:(id*)arg1;
- (id)taskRecordsWithError:(id*)arg1;

@end
