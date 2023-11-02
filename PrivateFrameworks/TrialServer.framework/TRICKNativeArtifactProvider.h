
@interface TRICKNativeArtifactProvider : NSObject <TRIArtifactProvider> {
    NSString * _bundleId;
    CKContainer * _container;
    <TRIDateProviding> * _dateProvider;
    <TRINamespaceDescriptorProviding> * _namespaceDescriptorProvider;
    TRICKQueryLog * _queryLog;
    NSString * _teamId;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) <TRIDateProviding> *dateProvider;
@property (nonatomic, readonly) <TRINamespaceDescriptorProviding> *namespaceDescriptorProvider;
@property (nonatomic, readonly) TRICKQueryLog *queryLog;
@property (nonatomic, readonly) NSString *teamId;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;

+ (id)cloudkitIdentifierForContainer:(int)arg1;
+ (id)containerForIdentifier:(id)arg1 serverContext:(id)arg2;
+ (int)containerFromCkContainer:(id)arg1;
+ (id)fetchRetryDateFromErrorAndOptions:(id)arg1 options:(id)arg2;
+ (bool)isActivityDeferralError:(id)arg1;
+ (id)mockSQLiteContainerWithIdentifier:(id)arg1 serverContext:(id)arg2 failureInjectionDelegate:(id)arg3;
+ (id)providerForContainer:(int)arg1 teamId:(id)arg2 bundleId:(id)arg3 dateProvider:(id)arg4 namespaceDescriptorProvider:(id)arg5 serverContext:(id)arg6;
+ (id)recordZoneForContainerIdentifier:(id)arg1 teamId:(id)arg2;

- (void).cxx_destruct;
- (void)_fetchBMLTNotificationsWithCursor:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchExperimentWithExperimentId:(id)arg1 deploymentId:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchExperimentsWithCursor:(id)arg1 withNamespaceNames:(id)arg2 sinceDate:(id)arg3 fetchRollbacksOnly:(bool)arg4 options:(id)arg5 resultsHandler:(id /* block */)arg6;
- (void)_fetchNotificationsWithQueryType:(unsigned long long)arg1 withCursor:(id)arg2 withNamespaceNames:(id)arg3 sinceDate:(id)arg4 options:(id)arg5 resultsHandler:(id /* block */)arg6;
- (void)_fetchRecordIdsForAssetsWithIds:(id)arg1 options:(id)arg2 cursor:(id)arg3 cancelableOp:(id)arg4 resultBuffer:(id)arg5 completion:(id /* block */)arg6;
- (void)_fetchRolloutNotificationWithRolloutId:(id)arg1 deploymentId:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchRolloutNotificationsWithCursor:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchRolloutNotificationsWithCursor:(id)arg1 options:(id)arg2 sinceDate:(id)arg3 namespaceNames:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)bundleId;
- (id)configurationFromOptions:(id)arg1;
- (id)container;
- (id)dateProvider;
- (id)fetchAssetsWithIndexes:(id)arg1 fromTreatmentWithRecordId:(id)arg2 options:(id)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)fetchAssetsWithRecordIds:(id)arg1 options:(id)arg2 perRecordProgress:(id /* block */)arg3 perRecordCompletionBlockOnSuccess:(id /* block */)arg4 perRecordCompletionBlockOnError:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)fetchBMLTCatalogNotificationWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchBMLTNotificationWithDeployment:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBMLTNotificationsWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchDiffSourceRecordIdsWithTargetAssetIds:(id)arg1 isAcceptableSourceAssetId:(id /* block */)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)fetchDiffsWithRecordIds:(id)arg1 options:(id)arg2 perRecordProgress:(id /* block */)arg3 perRecordCompletionBlockOnSuccess:(id /* block */)arg4 perRecordCompletionBlockOnError:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)fetchExperimentNotificationsForLimitedCarryExperimentWithManager:(id)arg1 options:(id)arg2 rollbacksOnly:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchExperimentNotificationsWithNamespaceNames:(id)arg1 rollbacksOnly:(bool)arg2 lastFetchDateOverride:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchExperimentWithExperimentDeployment:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchExperimentWithLatestDeploymentForExperimentId:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchFactorPackSetWithId:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)fetchRecordIdsForAssetsWithIds:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRolloutNotificationWithDeployment:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRolloutNotificationWithLatestDeploymentForRolloutId:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRolloutNotificationsDateAscendingWithOptions:(id)arg1 lastFetchDateOverride:(id)arg2 namespaceNames:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchRolloutNotificationsDateDescendingWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchTreatmentWithId:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithCloudKitContainer:(id)arg1 zoneId:(id)arg2 teamId:(id)arg3 bundleId:(id)arg4 dateProvider:(id)arg5 namespaceDescriptorProvider:(id)arg6;
- (id)namespaceDescriptorProvider;
- (id)queryLog;
- (id)queryOperationForRecordType:(id)arg1 predicate:(id)arg2 desiredKeys:(id)arg3 options:(id)arg4 recordMatchedBlock:(id /* block */)arg5 queryCompletionBlock:(id /* block */)arg6;
- (id)queryOperationForRecordType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 desiredKeys:(id)arg4 options:(id)arg5 recordMatchedBlock:(id /* block */)arg6 queryCompletionBlock:(id /* block */)arg7;
- (id)queryOperationWithCursor:(id)arg1 desiredKeys:(id)arg2 options:(id)arg3 recordMatchedBlock:(id /* block */)arg4 queryCompletionBlock:(id /* block */)arg5;
- (id)teamId;
- (id)zoneID;

@end
