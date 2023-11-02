
@interface ACHQueryServer : HDQueryServer <ACHAchievementStoreObserving> {
    <ACHAchievementStoring> * _achievementStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;

- (void).cxx_destruct;
- (id)_clientProxy;
- (id)_newSystemEnabledError;
- (void)_queue_start;
- (void)_queue_stop;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
