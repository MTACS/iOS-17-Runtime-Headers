
@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    <TRITrialInternalEntitled> * _entitlementWitness;
    TRIXPCServerContextPromise * _promise;
}

- (void).cxx_destruct;
- (void)_experimentRecordsWithDeploymentEnvironments:(id)arg1 privacyFilterPolicy:(unsigned char)arg2 serverContext:(id)arg3 taskQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)activeBMLTInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)activeExperimentInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)activeRolloutInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)deregisterNamespaceWithNamespaceName:(id)arg1 teamId:(id)arg2 completion:(id /* block */)arg3;
- (void)dynamicNamespaceRecordsWithCompletion:(id /* block */)arg1;
- (void)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(id /* block */)arg4;
- (void)immediatelySchedulePostUpgradeActivityWithCompletion:(id /* block */)arg1;
- (id)initWithPromise:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 entitlementWitness:(id)arg3;
- (void)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 completion:(id /* block */)arg3;
- (void)logSystemCovariates;
- (void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(id /* block */)arg8;
- (void)removeUnusedChannelsWithCompletion:(id /* block */)arg1;
- (void)resumeSQLiteCKDatabaseQueueWithCompletion:(id /* block */)arg1;
- (void)rolloutNotificationWithLatestDeploymentForRolloutId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(id /* block */)arg4;
- (void)setFailureInjectionDelegate:(id)arg1;
- (void)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 completion:(id /* block */)arg4;
- (void)setSubscription:(id)arg1 namespaceName:(id)arg2 completion:(id /* block */)arg3;
- (void)startDownloadNamespaceWithName:(id)arg1 teamId:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)submitTask:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)subscriptionForNamespaceName:(id)arg1 completion:(id /* block */)arg2;
- (void)suspendSQLiteCKDatabaseQueueWithCompletion:(id /* block */)arg1;
- (void)taskRecordsWithCompletion:(id /* block */)arg1;

@end
