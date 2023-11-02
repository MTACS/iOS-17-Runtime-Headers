
@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HDCloudSyncManagerObserver, HKCloudSyncObserverServerInterface> {
    bool  _hasRestoreCompleted;
    bool  _observingSyncStatus;
    NSObject<OS_dispatch_queue> * _queue;
    HKCloudSyncObserverStatus * _status;
    NSObservation * _waitForSyncObservations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_cloudKitIdentityUpdated:(id)arg1;
- (void)cloudSyncManager:(id)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)cloudSyncManager:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastLitePushDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPullDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPulledUpdateDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPushDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateSyncEnabled:(bool)arg2;
- (void)connectionInvalidated;
- (id)description;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)arg1;
- (id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)arg1 completion:(id /* block */)arg2;

@end
