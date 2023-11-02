
@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    SBAccessibilityHardwareButtonInteraction * _accessibilityButtonInteraction;
    SBHardwareButtonGestureParameters * _accessibilityGestureParameters;
    SBHardwareButtonService * _hardwareButtonService;
    long long  _homeButtonType;
    bool  _isButtonDown;
    SBApplication * _lastLockButtonEventRecipient;
    <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> * _proximitySensorButtonInteraction;
    SBHardwareButtonGestureParameters * _proximitySensorGestureParameters;
    SBProximitySensorManager * _proximitySensorManager;
    SBSiriHardwareButtonInteraction * _siriButtonInteraction;
    SBHardwareButtonGestureParameters * _siriGestureParameters;
    SBSleepWakeHardwareButtonInteraction * _sleepWakeButtonInteraction;
    SOSManager * _sosManager;
    long long  _sosTriggerMechanism;
    SBWalletPreArmController * _walletPreArmController;
}

@property (nonatomic, retain) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isButtonDown;
@property (nonatomic, retain) <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> *proximitySensorButtonInteraction;
@property (nonatomic, retain) SBSiriHardwareButtonInteraction *siriButtonInteraction;
@property (nonatomic, retain) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_foregroundAppRegisteredForLockButtonEvents;
- (bool)_isSOSActive;
- (void)_performSOSDidTriggerActions;
- (void)_registeredLockButtonAppsDidChange:(id)arg1;
- (bool)_sendButtonDownToRegisteredApp;
- (void)_sendButtonEventToApp:(id)arg1 down:(bool)arg2;
- (bool)_sendButtonUpToRegisteredApp;
- (bool)_shouldWaitForDoublePress;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (bool)_usesLockButtonForSecureIntent;
- (bool)_usesLockButtonForSiri;
- (id)accessibilityButtonInteraction;
- (bool)disallowsDoublePressForReason:(id*)arg1;
- (bool)disallowsLongPressForReason:(id*)arg1;
- (bool)disallowsSinglePressForReason:(id*)arg1;
- (bool)disallowsTriplePressForReason:(id*)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2;
- (bool)isButtonDown;
- (bool)performButtonUpPreActions;
- (void)performDoublePressActions;
- (void)performFinalButtonUpActions;
- (void)performForceResetSequenceBeganActions;
- (void)performInitialButtonDownActions;
- (void)performInitialButtonUpActions;
- (void)performKeyboardShortcut;
- (void)performLongPressActions;
- (void)performLongPressCancelledActions;
- (void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(id /* block */)arg3;
- (void)performSOSGestureBeganActions;
- (void)performSOSGestureEndedActions;
- (void)performSecondButtonDownActions;
- (void)performSinglePressAction;
- (void)performSinglePressDidFailActions;
- (void)performTerminalLockLongPressActions;
- (void)performTriplePressActions;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (id)proximitySensorButtonInteraction;
- (bool)reverseFadeOutIfNeeded;
- (void)setAccessibilityButtonInteraction:(id)arg1;
- (void)setProximitySensorButtonInteraction:(id)arg1;
- (void)setSiriButtonInteraction:(id)arg1;
- (void)setSleepWakeButtonInteraction:(id)arg1;
- (bool)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (id)siriButtonInteraction;
- (id)sleepWakeButtonInteraction;

@end
