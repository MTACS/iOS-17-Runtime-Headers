
@interface HDHealthAppDataObserver : NSObject <HDCloudSyncManagerObserver, HDDataObserver> {
    HDDataManager * _dataManager;
    NSObject<OS_dispatch_queue> * _debounceQueue;
    _HKDelayedOperation * _delayedOperation;
    HDHAHealthPluginHostFeedGenerator * _feedGenerator;
    HDProfile * _profile;
}

@property (nonatomic, retain) HDDataManager *dataManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *debounceQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _HKDelayedOperation *delayedOperation;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertSampleTypes;
- (void)cloudSyncManager:(id)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)cloudSyncManager:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastLitePushDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPullDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPulledUpdateDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateLastPushDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;
- (void)cloudSyncManager:(id)arg1 didUpdateSyncEnabled:(bool)arg2;
- (id)dataManager;
- (void)dealloc;
- (id)debounceQueue;
- (void)debounceRunBackgroundGeneration;
- (id)delayedOperation;
- (id)feedGenerator;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 debounceTime:(double)arg2;
- (void)observeForAlertSampleTypes;
- (id)profile;
- (void)runBackgroundGeneration;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setDataManager:(id)arg1;
- (void)setDebounceQueue:(id)arg1;
- (void)setDelayedOperation:(id)arg1;
- (void)setFeedGenerator:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)start;

@end
