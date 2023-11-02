
@interface ENOnboardingManager : NSObject {
    CXCallObserver * _callObserver;
    int  _cameraIrisBackNotifyToken;
    int  _cameraIrisBackTeleNotifyToken;
    int  _cameraIrisFrontNotifyToken;
    NSObject<ENOnboardingManagerDelegate> * _delegate;
    bool  _isCaptureSessionRunning;
    bool  _pendingBuddyOnboarding;
    int  _screenLockNotifyToken;
}

@property (nonatomic, retain) CXCallObserver *callObserver;
@property (nonatomic) NSObject<ENOnboardingManagerDelegate> *delegate;
@property (getter=isDeviceUnlocked, nonatomic, readonly) bool deviceUnlocked;
@property (getter=isIdealTimeForBuddy, nonatomic, readonly) bool idealTimeForBuddy;
@property (nonatomic) bool isCaptureSessionRunning;
@property (nonatomic) bool pendingBuddyOnboarding;

- (void).cxx_destruct;
- (void)_cameraIrisStateChangedWithToken:(int)arg1;
- (void)_deviceLockStateChangedWithToken:(int)arg1;
- (bool)_isInLostMode;
- (void)_observeCameraIrisNotifications;
- (id)callObserver;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isCaptureSessionRunning;
- (bool)isDeviceUnlocked;
- (bool)isIdealTimeForBuddy;
- (bool)pendingBuddyOnboarding;
- (void)setCallObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsCaptureSessionRunning:(bool)arg1;
- (void)setPendingBuddyOnboarding:(bool)arg1;
- (void)setShouldObserveDeviceUnlocks:(bool)arg1;

@end
