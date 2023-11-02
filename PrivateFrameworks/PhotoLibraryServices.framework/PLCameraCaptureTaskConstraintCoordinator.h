
@interface PLCameraCaptureTaskConstraintCoordinator : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSObject<OS_dispatch_queue> * _activationQueue;
    PFCameraViewfinderSessionWatcher * _cameraWatcher;
    NSObject<OS_dispatch_queue> * _cameraWatcherQueue;
    NSString * _creationDateString;
    bool  _delayedDeactivationInProgress;
    PLDelayedActionTimer * _failsafeTimer;
    bool  _failsafeTimerEnabled;
    NSString * _name;
    long long  _role;
    PLXPCTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long role;
@property (readonly) Class superclass;

+ (bool)_shouldUseFailsafeTimerForRole:(long long)arg1;
+ (bool)_shouldWatchCameraViewfinderForRole:(long long)arg1;
+ (id)taskConstraintStatus;

- (void).cxx_destruct;
- (void)_activateCameraSessionTaskConstraints;
- (void)_cancelSessionFailsafeTimer;
- (void)_deactivateCameraSessionTaskConstraintsAfterDelay:(double)arg1;
- (void)_invalidateTransactionAndStopConstrainingTasksWithDelayedDeactivation:(bool)arg1;
- (void)_startSessionFailsafeTimer;
- (void)_startWatchingCameraActivity;
- (void)activateCameraSessionTaskConstraints;
- (void)cameraWatcherDidChangeState:(id)arg1;
- (void)deactivateCameraSessionTaskConstraints;
- (id)description;
- (id)initWithTaskContstraintRole:(long long)arg1 name:(id)arg2;
- (void)invalidate;
- (long long)role;
- (id)sessionStatusDescription;

@end
