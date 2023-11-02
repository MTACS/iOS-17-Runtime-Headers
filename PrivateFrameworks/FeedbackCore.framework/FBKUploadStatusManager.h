
@interface FBKUploadStatusManager : NSObject <DEDUploadStatusDelegate> {
    FBKData * _data;
    DEDController * _ded;
    FBKDeviceManager * _deviceManager;
    bool  _shouldLogProgress;
    NSMutableDictionary * _submissionTimers;
    NSMutableSet * _trackedTasks;
}

@property FBKData *data;
@property (readonly, copy) NSString *debugDescription;
@property (retain) DEDController *ded;
@property (readonly, copy) NSString *description;
@property (retain) FBKDeviceManager *deviceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldLogProgress;
@property (retain) NSMutableDictionary *submissionTimers;
@property (readonly) Class superclass;
@property (retain) NSMutableSet *trackedTasks;

- (void).cxx_destruct;
- (id)configureSubmissionTimerForTask:(id)arg1 timeout:(double)arg2;
- (id)data;
- (id)ded;
- (void)deleteAndNotifyUploadTaskWithTask:(id)arg1;
- (id)deviceManager;
- (void)didFailToConnectToSessionsOnTask:(id)arg1;
- (void)didFailToGetUploadUpdatesForUploadTask:(id)arg1;
- (void)didFailToGetUploadUpdatesForUploadTask:(id)arg1 shouldTryServerUpdates:(bool)arg2;
- (void)didGetSessionStateUpdate:(id)arg1 uploadTask:(id)arg2 newState:(long long)arg3 sessionInfo:(id)arg4;
- (void)didLogOutWithCompletion:(id /* block */)arg1;
- (void)fallbackToServerSideUploadUpdatesForTask:(id)arg1;
- (void)fallbackToServerSideUploadUpdatesForTask:(id)arg1 attempts:(unsigned long long)arg2;
- (void)getAllBugSessionsForTask:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithData:(id)arg1 ded:(id)arg2 deviceManager:(id)arg3;
- (bool)isTrackingTask:(id)arg1;
- (void)pollDEDForSessionsStateOnActiveSession:(id)arg1 uploadTask:(id)arg2 isCurrentDeviceSession:(bool)arg3;
- (void)pollDEDForSessionsStateOnActiveSession:(id)arg1 uploadTask:(id)arg2 isCurrentDeviceSession:(bool)arg3 totalQueryCount:(unsigned long long)arg4 lastState:(long long)arg5 lastInfo:(id)arg6;
- (void)pollDEDForSessionsStateOnTask:(id)arg1 sessions:(id)arg2;
- (void)reloadFilerFormForFinishedTask:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDed:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setShouldLogProgress:(bool)arg1;
- (void)setSubmissionTimers:(id)arg1;
- (void)setTrackedTasks:(id)arg1;
- (bool)shouldGiveUpOnUploadWithPromises:(id)arg1;
- (bool)shouldGiveUpOnUploadWithPromises:(id)arg1 stalenessDate:(id)arg2;
- (bool)shouldLogProgress;
- (void)stopTrackingAllTasks;
- (void)stopTrackingTaskIfDeleted:(id)arg1;
- (void)stopTrackingUploadTask:(id)arg1;
- (id)submissionTimers;
- (void)timer:(id)arg1 didTimeoutForTask:(id)arg2;
- (void)trackUploadIfNeeded:(id)arg1;
- (void)trackUploadTask:(id)arg1;
- (void)trackUploadTask:(id)arg1 attempt:(long long)arg2;
- (id)trackedTasks;
- (void)updateUploadTask:(id)arg1 withUploadProgress:(unsigned long long)arg2 uploadSize:(unsigned long long)arg3 onBugSession:(id)arg4 state:(long long)arg5;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;
- (void)waitOnUpdatesForTask:(id)arg1 withSessions:(id)arg2;
- (id)workingFilePromisesFromSet:(id)arg1 stalenessDate:(id)arg2;

@end
