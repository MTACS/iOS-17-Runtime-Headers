
@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol> {
    bool  __hasBeenStarted;
    AXSSRateLimitingLogger * __loggingRateLimiter;
    NSXPCConnection * __motionTrackingDaemonConnection;
    bool  __tracking;
    bool  _debugOverlayEnabled;
    <AXSSMotionTrackerDelegate> * _delegate;
    AXSSMotionTrackingExpressionConfiguration * _expressionConfiguration;
    AXSSMotionTrackingInputConfiguration * _inputConfiguration;
    double  _joystickModeMovementThreshold;
    unsigned long long  _motionTrackingMode;
    double  _sensitivity;
    AXSSMotionTrackingState * _state;
}

@property (nonatomic) bool _hasBeenStarted;
@property (nonatomic, retain) AXSSRateLimitingLogger *_loggingRateLimiter;
@property (nonatomic, readonly) <AXSSMotionTrackingDaemonProtocol> *_motionTrackingDaemon;
@property (nonatomic, retain) NSXPCConnection *_motionTrackingDaemonConnection;
@property (nonatomic) bool _tracking;
@property (nonatomic) bool debugOverlayEnabled;
@property (nonatomic) <AXSSMotionTrackerDelegate> *delegate;
@property (nonatomic, copy) AXSSMotionTrackingExpressionConfiguration *expressionConfiguration;
@property (nonatomic, copy) AXSSMotionTrackingInputConfiguration *inputConfiguration;
@property (nonatomic) double joystickModeMovementThreshold;
@property (nonatomic, retain) NSValue *lookAtPoint;
@property (nonatomic) unsigned long long motionTrackingMode;
@property (nonatomic) double sensitivity;
@property (nonatomic, copy) AXSSMotionTrackingState *state;
@property (getter=isTracking, nonatomic, readonly) bool tracking;

+ (id)supportedExpressionSensitivitiesAscending;
+ (id)supportedExpressions;

- (void).cxx_destruct;
- (void)_changeState:(id)arg1;
- (bool)_hasBeenStarted;
- (id)_loggingRateLimiter;
- (id)_motionTrackingDaemon;
- (id)_motionTrackingDaemonConnection;
- (void)_motionTrackingDaemonWasInterruptedFromXPC;
- (bool)_tracking;
- (void)_updateState:(id)arg1;
- (void)dealloc;
- (bool)debugOverlayEnabled;
- (id)delegate;
- (id)expressionConfiguration;
- (id)init;
- (id)inputConfiguration;
- (void)invalidate;
- (bool)isTracking;
- (double)joystickModeMovementThreshold;
- (id)lookAtPoint;
- (void)motionTrackingDaemonUpdatedState:(id)arg1;
- (unsigned long long)motionTrackingMode;
- (void)recalibrateFace;
- (double)sensitivity;
- (void)setDebugOverlayEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpressionConfiguration:(id)arg1;
- (void)setInputConfiguration:(id)arg1;
- (void)setJoystickModeMovementThreshold:(double)arg1;
- (void)setLookAtPoint:(id)arg1;
- (void)setMotionTrackingMode:(unsigned long long)arg1;
- (void)setSensitivity:(double)arg1;
- (void)setState:(id)arg1;
- (void)set_hasBeenStarted:(bool)arg1;
- (void)set_loggingRateLimiter:(id)arg1;
- (void)set_motionTrackingDaemonConnection:(id)arg1;
- (void)set_tracking:(bool)arg1;
- (void)start;
- (id)state;
- (void)stop;

@end
