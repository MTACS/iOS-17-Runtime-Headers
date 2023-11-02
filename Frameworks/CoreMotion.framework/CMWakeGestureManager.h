
@interface CMWakeGestureManager : NSObject {
    unsigned int  backlightService;
    long long  fCurrentState;
    <CMWakeGestureDelegate> * fDelegate;
    NSObject<OS_dispatch_queue> * fDispatchQ;
    bool  fEnableAudioAlert;
    bool  fEnableLatencyAlert;
    unsigned int  fIoNotification;
    struct IONotificationPort { } * fIoNotifyPort;
    bool  fIsDisplayActive;
    bool  fIsRunningInPrimaryProcess;
    double  fLastDisplayOnTime;
    double  fLastNotificationTime;
    int  fLatencyAlertThreshold;
    int  fLockScreenToken;
    int  fMeasureLatencyState;
    bool  fNightStandModeEnabled;
    int  fNightStandThreshold;
    struct Dispatcher { int (**x1)(); id x2; } * fPowerStateDispatcher;
    NSString * fProcessName;
    int  fSelector;
    <CMWakeGestureDelegate> * fUpdatedDelegate;
    struct Dispatcher { int (**x1)(); id x2; } * fWakeDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::default_delete<CMWakeGestureVisitor>> { 
        struct __compressed_pair<CMWakeGestureVisitor *, std::default_delete<CMWakeGestureVisitor>> { 
            struct CMWakeGestureVisitor {} *__value_; 
        } __ptr_; 
    }  fWakeGestureVisitor;
    double  fWakePacketTimestamp;
    bool  gestureUpdatesStarted;
}

@property (nonatomic) <CMWakeGestureDelegate> *delegate;

+ (bool)hasSlowBootArgs;
+ (bool)isWakeGestureAvailable;
+ (bool)isWakeGestureOverrideEnabled;
+ (id)sharedManager;
+ (id)stringForGestureState:(long long)arg1;
+ (id)stringForMode:(unsigned char)arg1;
+ (id)stringForNotification:(unsigned char)arg1;
+ (id)stringForStartPose:(unsigned char)arg1;
+ (id)stringForViewPose:(unsigned char)arg1;
+ (unsigned char)toRaw:(long long)arg1;
+ (long long)toState:(unsigned char)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)forceDetected;
- (id)initWithQueue:(id)arg1;
- (void)invokeDelegateWithState:(long long)arg1;
- (void)loadPreferences;
- (void)logWakeLatency;
- (void)onBacklightServiceUpdated:(unsigned int)arg1;
- (void)onNotificationControl:(id)arg1;
- (void)onPowerStateUpdated:(const struct Sample { unsigned int x1; }*)arg1;
- (void)onWakeUpdated:(const struct Sample { unsigned long long x1; struct GestureReport {} *x2; }*)arg1;
- (void)playAlert;
- (void)reenableDetectedStateRecognition;
- (void)sendWakeTriggerAnalytics:(id)arg1 withDisplay:(int)arg2;
- (void)setBacklightState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setNightStandWakeEnabled:(bool)arg1 withConfiguration:(long long)arg2;
- (void)simulateGesture:(long long)arg1 after:(double)arg2;
- (bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;

@end
