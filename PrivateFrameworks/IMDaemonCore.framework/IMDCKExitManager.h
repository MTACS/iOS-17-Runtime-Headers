
@interface IMDCKExitManager : IMDCKAbstractSyncController {
    NSObject<OS_dispatch_queue> * _ckQueue;
    IMDCKDatabaseManager * _databaseManager;
    NSError * _errorFetchingExitDate;
    NSDate * _exitRecordDate;
    CKRecordID * _exitRecordID;
    bool  _fetchedExitDateOnLaunch;
    IMDRecordZoneManager * _recordZoneManager;
    NSNumber * _saltZoneCreatedOverride;
    NSNumber * _subscriptionCreatedOverride;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) IMDCKDatabaseManager *databaseManager;
@property (nonatomic, retain) NSError *errorFetchingExitDate;
@property (nonatomic, retain) NSDate *exitRecordDate;
@property (nonatomic, retain) CKRecordID *exitRecordID;
@property (nonatomic) bool fetchedExitDateOnLaunch;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) NSNumber *saltZoneCreatedOverride;
@property (nonatomic, retain) NSNumber *subscriptionCreatedOverride;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_analyticZoneCreated;
- (bool)_canSubmitCloudKitAnalytic;
- (bool)_canSubmitCloudKitMetric;
- (void)_evalToggleiCloudSettingsSwitch;
- (void)_fetchExitRecordDateWithCompletion:(id /* block */)arg1;
- (id)_modifiedOpGroupName:(id)arg1;
- (bool)_saltZoneCreated;
- (void)_scheduleMetricOperation:(id)arg1;
- (void)_scheduleOperation:(id)arg1;
- (void)_setUpSubscription;
- (id)_sharedCKUtilities;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)arg1 record:(id)arg2 ignoreZoneNotFoundError:(bool)arg3 completion:(id /* block */)arg4;
- (bool)_subscriptionCreated;
- (id)analyticZoneRecordID;
- (id)ckQueue;
- (id)databaseManager;
- (void)deleteExitRecordWithCompletion:(id /* block */)arg1;
- (long long)derivedQualityOfService;
- (id)errorFetchingExitDate;
- (id)exitConfiguration;
- (id)exitRecordDate;
- (void)exitRecordDateWithCompletion:(id /* block */)arg1;
- (id)exitRecordID;
- (bool)fetchedExitDateOnLaunch;
- (void)handleNotificationForSubscriptionID:(id)arg1;
- (id)init;
- (id)initRecordZoneManager:(id)arg1 databaseManager:(id)arg2;
- (id)recordZoneManager;
- (id)saltZoneCreatedOverride;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
- (void)setCkQueue:(id)arg1;
- (void)setDatabaseManager:(id)arg1;
- (void)setErrorFetchingExitDate:(id)arg1;
- (void)setExitRecordDate:(id)arg1;
- (void)setExitRecordID:(id)arg1;
- (void)setFetchedExitDateOnLaunch:(bool)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSaltZoneCreatedOverride:(id)arg1;
- (void)setSubscriptionCreatedOverride:(id)arg1;
- (void)submitCloudKitAnalyticWithDictionary:(id)arg1 operationGroupName:(id)arg2 completion:(id /* block */)arg3;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2;
- (void)submitCloudKitMetricWithData:(id)arg1 operationGroupName:(id)arg2 completion:(id /* block */)arg3;
- (void)submitCloudKitMetricWithOperationGroupName:(id)arg1;
- (id)subscriptionCreatedOverride;
- (id)syncCompleteRecordID;
- (void)writeExitRecordWithDate:(id)arg1 completion:(id /* block */)arg2;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (void)writeSyncCompletedRecordWithDate:(id)arg1 completion:(id /* block */)arg2;

@end
