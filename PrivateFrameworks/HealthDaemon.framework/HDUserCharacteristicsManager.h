
@interface HDUserCharacteristicsManager : NSObject <HDCloudSyncManagerObserver, HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDNanoSyncManagerObserver, HDProfileReadyObserver> {
    NSNumber * _hasWatchOnAccount;
    bool  _isCloudSyncEnabled;
    NSDictionary * _lastUserProfile;
    bool  _needsUpdateAfterUnlock;
    HKObserverSet<HDUserCharacteristicsProfileObserver> * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldUpdateQuantityCharacteristics;
    int  _significantTimeChangeNotificationToken;
    _HKDelayedOperation * _updateOperation;
    NSDate * _userProfileLastUpdated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(bool)arg3 updateProfileAndSync:(bool)arg4 error:(id*)arg5;
- (void)addProfileObserver:(id)arg1;
- (void)cloudSyncManager:(id)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)cloudSyncManager:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastLitePushDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPullDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPulledUpdateDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPushDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateSyncEnabled:(bool)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)didReceiveAuthKitDeviceListChangeNotification:(id)arg1;
- (void)didReceiveDayChangeNotification:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)modificationDateForCharacteristicWithType:(id)arg1 error:(id*)arg2;
- (void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeProfileObserver:(id)arg1;
- (double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(bool)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3;
- (void)unitTest_updateCharacteristicsAndUserProfileWithDate:(id)arg1 completion:(id /* block */)arg2;
- (id)userCharacteristicForType:(id)arg1 error:(id*)arg2;

@end
