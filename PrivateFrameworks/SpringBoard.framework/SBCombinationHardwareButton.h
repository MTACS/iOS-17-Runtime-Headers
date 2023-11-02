
@interface SBCombinationHardwareButton : NSObject <SBHardwareButtonColluding, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter, SBSOSClawGestureObserverDelegate, SBSOSLockGestureObserverDelegate, UIGestureRecognizerDelegate> {
    SBBacklightController * _backlightController;
    SBCombinationHardwareButtonActions * _buttonActions;
    SBHardwareButtonCoordinator * _hardwareButtonCoordinator;
    SBHomeHardwareButton * _homeHardwareButton;
    SBLockHardwareButton * _lockHardwareButton;
    SBProximitySensorManager * _proximitySensorManager;
    NSMutableDictionary * _screenshotDisableAssertions;
    SBClickGestureRecognizer * _screenshotGestureRecognizer;
    SBLongPressGestureRecognizer * _shutdownGestureRecognizer;
    SBSOSClawGestureObserver * _sosClawGestureObserver;
    SBPressGestureRecognizer * _sosGestureRecognizer;
    SBSOSLockGestureObserver * _sosLockGestureObserver;
    SBVolumeHardwareButton * _volumeHardwareButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBHardwareButtonCoordinator *hardwareButtonCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backlightChanged:(id)arg1;
- (void)_configureGestureRecognizers;
- (void)_configureSOSGestureBehaviors;
- (void)_setScreenshotDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_sosTriggerMechanismDidChange;
- (void)cancelHardwareButtonPress;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hardwareButtonCoordinator;
- (id)hardwareButtonIdentifier;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeHardwareButton:(id)arg3 lockHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 proximitySensorManager:(id)arg6 backlightController:(id)arg7;
- (id)preemptablePressGestureRecognizers;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)screenshotGesture:(id)arg1;
- (void)setHardwareButtonCoordinator:(id)arg1;
- (void)shutdownGesture:(id)arg1;
- (void)sosClawAutoCallInteractiveStateChanged:(id)arg1 interacting:(bool)arg2;
- (void)sosClawDidBecomeActive:(id)arg1;
- (void)sosClawDidBecomeInactive:(id)arg1;
- (void)sosClawDidTriggerSOS:(id)arg1 completion:(id /* block */)arg2;
- (void)sosGesture:(id)arg1;
- (void)sosLockDidTriggerSOS:(id)arg1 completion:(id /* block */)arg2;
- (void)sosLockTriggerDidBecomeActive:(id)arg1;
- (void)sosLockTriggerDidBecomeInactive:(id)arg1;

@end
