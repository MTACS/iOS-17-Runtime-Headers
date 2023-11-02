
@interface PHAMusicActivity : NSObject <PHAActivity, PHPhotoLibraryAvailabilityObserver> {
    NSObject<OS_xpc_object> * _activity;
    <PHAActivityDelegate> * _delegate;
    bool  _doneRequested;
    PGManager * _graphManager;
    NSArray * _musicJobs;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PHAActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doneRequested;
@property (nonatomic, readonly) PGManager *graphManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *musicJobs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)tasks;
+ (void)unregister;

- (void).cxx_destruct;
- (id)activity;
- (id)delegate;
- (bool)doneRequested;
- (id)graphManager;
- (bool)haltIfNeeded;
- (void)haltWithState:(long long)arg1;
- (id)init;
- (bool)jobCanContinue;
- (id)musicJobs;
- (void)onDidScheduleAllJobs;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)readShouldDefer:(bool*)arg1 doneRequested:(bool*)arg2;
- (void)registerActivityWithDelegate:(id)arg1;
- (void)scheduleNextJob;
- (void)setDoneRequested:(bool)arg1;
- (void)startActivity;
- (id)workQueue;

@end
