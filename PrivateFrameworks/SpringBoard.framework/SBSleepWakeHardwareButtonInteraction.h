
@interface SBSleepWakeHardwareButtonInteraction : NSObject <SBHardwareButtonGestureParametersObserver, SBHardwareButtonInteraction> {
    SpringBoard * _SBApp;
    bool  _SOSGestureActive;
    SBBacklightController * _backlightController;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    bool  _didPlayLockSound;
    bool  _fadeOutInProgressFromLockButtonWhileUnlocked;
    bool  _inhibitNextSinglePressUp;
    SBLockScreenManager * _lockScreenManager;
    double  _multiplePressTimeInterval;
    SBScreenWakeAnimationController * _screenWakeAnimationController;
    SBHIDUISensorModeController * _sensorModeController;
    SBSoundController * _soundController;
    bool  _undidFadeOutFromLockButton;
}

@property (nonatomic, retain) SpringBoard *SBApp;
@property (getter=isSOSGestureActive, nonatomic) bool SOSGestureActive;
@property (nonatomic, retain) SBBacklightController *backlightController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BSInvalidatable> *deferOrientationUpdatesAssertion;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPlayLockSound;
@property (nonatomic) bool fadeOutInProgressFromLockButtonWhileUnlocked;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inhibitNextSinglePressUp;
@property (nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic) double multiplePressTimeInterval;
@property (nonatomic, retain) SBScreenWakeAnimationController *screenWakeAnimationController;
@property (nonatomic, retain) SBHIDUISensorModeController *sensorModeController;
@property (nonatomic, retain) SBSoundController *soundController;
@property (readonly) Class superclass;
@property (nonatomic) bool undidFadeOutFromLockButton;

- (void).cxx_destruct;
- (id)SBApp;
- (void)_performSleep;
- (void)_performWake;
- (void)_playLockSound;
- (id)backlightController;
- (bool)consumeInitialPressDown;
- (bool)consumeSinglePressUp;
- (id)deferOrientationUpdatesAssertion;
- (bool)didPlayLockSound;
- (bool)fadeOutInProgressFromLockButtonWhileUnlocked;
- (bool)inhibitNextSinglePressUp;
- (id)init;
- (bool)isSOSGestureActive;
- (id)lockScreenManager;
- (double)multiplePressTimeInterval;
- (void)performSleepForReason:(id)arg1;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (bool)reverseSleepIfNeededAndPossible;
- (id)screenWakeAnimationController;
- (id)sensorModeController;
- (void)setBacklightController:(id)arg1;
- (void)setDeferOrientationUpdatesAssertion:(id)arg1;
- (void)setDidPlayLockSound:(bool)arg1;
- (void)setFadeOutInProgressFromLockButtonWhileUnlocked:(bool)arg1;
- (void)setInhibitNextSinglePressUp:(bool)arg1;
- (void)setLockScreenManager:(id)arg1;
- (void)setMultiplePressTimeInterval:(double)arg1;
- (void)setSBApp:(id)arg1;
- (void)setSOSGestureActive:(bool)arg1;
- (void)setScreenWakeAnimationController:(id)arg1;
- (void)setSensorModeController:(id)arg1;
- (void)setSoundController:(id)arg1;
- (void)setUndidFadeOutFromLockButton:(bool)arg1;
- (id)soundController;
- (bool)undidFadeOutFromLockButton;

@end
