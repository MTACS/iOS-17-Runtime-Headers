
@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> * _accessibilityButtonInteraction;
    SBHardwareButtonGestureParameters * _accessibilityGestureParameters;
    bool  _buttonDown;
    SBHardwareButtonActionList * _buttonUpActions;
    SBHardwareButtonActionList * _buttonUpPostActions;
    double  _currentLongPressDuration;
    bool  _dontUnlockOnButtonUp;
    SBHardwareButtonService * _hardwareButtonService;
    long long  _homeButtonType;
    double  _menuButtonHoldStartAbsoluteTime;
    unsigned long long  _menuButtonHoldStartTime;
    SBProximitySensorManager * _proximitySensorManager;
    bool  _screenWasDimOnMenuDown;
    <SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> * _siriButtonInteraction;
    SBHardwareButtonGestureParameters * _siriGestureParameters;
}

@property (getter=isButtonDown, nonatomic) bool buttonDown;
@property (nonatomic) double currentLongPressDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logMenuButtonHoldTime;
- (bool)_performButtonPreflightActions;
- (bool)_shouldIgnorePressesDueToProxOrIdle:(id*)arg1;
- (void)configureForwardingToLockButtonActions:(id)arg1;
- (double)currentLongPressDuration;
- (id)hardwareButtonGestureParameters;
- (id)initWitHomeButtonType:(long long)arg1;
- (bool)isButtonDown;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(id /* block */)arg1;
- (void)performDoublePressDownActions;
- (void)performDoubleTapUpActions;
- (void)performFinalButtonUpActions;
- (void)performInitialButtonDownActions;
- (void)performInitialButtonUpActions;
- (void)performLongPressActions;
- (void)performLongPressCancelledActions;
- (void)performSinglePressUpActions;
- (void)performSinglePressUpActionsWithSourceType:(unsigned long long)arg1;
- (void)performTriplePressUpActions;
- (void)performWhenMenuButtonIsUpUsingBlock:(id /* block */)arg1;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)setButtonDown:(bool)arg1;
- (void)setCurrentLongPressDuration:(double)arg1;

@end
