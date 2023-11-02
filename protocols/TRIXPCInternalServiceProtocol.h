
@protocol TRIXPCInternalServiceProtocol

@required

- (void)activeBMLTInformationWithPrivacyFilterPolicy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)activeExperimentInformationWithPrivacyFilterPolicy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)activeRolloutInformationWithPrivacyFilterPolicy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)deregisterNamespaceWithNamespaceName:(void *)arg1 teamId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dynamicNamespaceRecordsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)experimentNotificationsWithExperimentId:(void *)arg1 cloudKitContainer:(void *)arg2 teamId:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)immediatelySchedulePostUpgradeActivityWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)lastFetchDateForContainer:(void *)arg1 teamId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)logSystemCovariates;
- (void)registerNamespaceWithNamespaceName:(void *)arg1 compatibilityVersion:(void *)arg2 defaultsFileURL:(void *)arg3 teamId:(void *)arg4 appContainerId:(void *)arg5 appContainerType:(void *)arg6 cloudKitContainerId:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSString *, unsigned int, NSURL *, NSString *, NSString *, long long, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeUnusedChannelsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)resumeSQLiteCKDatabaseQueueWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)rolloutNotificationWithLatestDeploymentForRolloutId:(void *)arg1 cloudKitContainer:(void *)arg2 teamId:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRIClientRolloutArtifact *, NSError *, void*
- (void)setFailureInjectionDelegate:(TRISQLiteCKDatabaseFailureInjectionDelegate *)arg1;
- (void)setLastFetchDate:(void *)arg1 forContainer:(void *)arg2 teamId:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDate *, int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setSubscription:(void *)arg1 namespaceName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)startDownloadNamespaceWithName:(void *)arg1 teamId:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, TRIDownloadOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)submitTask:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <TRITask> *, TRITaskQueuingOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)subscriptionForNamespaceName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)suspendSQLiteCKDatabaseQueueWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)taskRecordsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
