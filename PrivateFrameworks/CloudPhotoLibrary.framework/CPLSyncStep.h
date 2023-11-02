
@interface CPLSyncStep : NSObject <CPLEngineSyncTaskDelegate> {
    CPLEngineSyncManager * _syncManager;
    CPLSyncSession * _syncSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionForTasks;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic, readonly) CPLEngineStore *engineStore;
@property (readonly) bool hasTasks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *lastError;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLEngineSyncManager *syncManager;
@property (nonatomic, readonly) CPLSyncSession *syncSession;

- (void).cxx_destruct;
- (void)cancelAllTasks:(bool)arg1;
- (bool)containsTask:(id)arg1;
- (id)descriptionForTasks;
- (bool)didFinishTask:(id)arg1 withError:(id)arg2 shouldStop:(bool*)arg3;
- (id)engineLibrary;
- (id)engineStore;
- (bool)hasTasks;
- (id)initWithSyncManager:(id)arg1 syncSession:(id)arg2;
- (id)lastError;
- (bool)launchNecessaryTasks;
- (void)moveTasksToBackground;
- (bool)prepareAndLaunchSyncTask:(id*)arg1;
- (float)progressForTask:(id)arg1 progress:(float)arg2;
- (void)setErrorForSyncSession:(id)arg1;
- (id)syncManager;
- (id)syncSession;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;

@end
