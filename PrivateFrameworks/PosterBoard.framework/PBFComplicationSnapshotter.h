
@interface PBFComplicationSnapshotter : NSObject <BSInvalidatable> {
    CHUISWidgetHostViewController * _hostViewController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_cleanedUp;
    double  _lock_endTime;
    bool  _lock_finished;
    bool  _lock_invalidated;
    NSHashTable * _lock_observers;
    double  _lock_startTime;
    bool  _lock_started;
    PBFComplicationSnapshotRequest * _request;
    UIImage * _snapshot;
    NSError * _snapshotError;
    NSString * _snapshotterIdentifier;
    CHSWidget * _widgetWithIntent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double elapsedTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PBFComplicationSnapshotRequest *request;
@property (nonatomic, readonly) UIImage *snapshot;
@property (nonatomic, readonly) NSError *snapshotError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithImage:(id)arg1 error:(id)arg2;
- (bool)_hasStarted;
- (bool)_isFinished;
- (void)_main_cleanup;
- (bool)_main_kickoffHostViewController:(id)arg1;
- (void)_main_requestTimedOut;
- (bool)_wasCleanedUp;
- (bool)_wasInvalidated;
- (void)addObserver:(id)arg1;
- (void)cancelWithReason:(id)arg1;
- (double)elapsedTime;
- (id)initWithComplicationSnapshotRequest:(id)arg1;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (id)request;
- (id)snapshot;
- (id)snapshotError;
- (bool)start;

@end
