
@interface UIUserInterfaceStyleArbiter : NSObject <BLSBacklightStateObserving, UISUserInterfaceStyleModeDelegate> {
    NSBackgroundActivityScheduler * _backgroundActivityScheduler;
    long long  _currentModeValue;
    long long  _currentStyle;
    _UICustomScheduleController * _customScheduleController;
    bool  _isAddingBacklightStateObserver;
    bool  _isDim;
    bool  _isObservingBacklightState;
    struct { 
        long long style; 
        long long timing; 
    }  _lastOverride;
    long long  _lastProposedAutomaticStyle;
    NSDate * _lastUpdateDate;
    int  _notificationToken;
    UISUserInterfaceStyleMode * _styleMode;
    _UISunScheduleController * _sunScheduleController;
}

@property (nonatomic, readonly) long long currentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_backlightStateUpdated:(long long)arg1 updateStyle:(bool)arg2;
- (id)_init;
- (void)_logArbiterDecisionToBiomeWithNewStyle:(long long)arg1 reason:(long long)arg2;
- (void)_logChangeEventWithNewMode:(long long)arg1 oldMode:(long long)arg2 newStyle:(long long)arg3 oldStyle:(long long)arg4 reason:(long long)arg5;
- (void)_logPeriodicEvent;
- (long long)_proposedStyleForCurrentMode;
- (void)_setWatchesScreenDim:(bool)arg1;
- (bool)_updateControllersWithOldModeValue:(long long)arg1 newModeValue:(long long)arg2;
- (void)_updateCurrentStyleAndNotify:(bool)arg1 forReason:(long long)arg2;
- (void)_updateCurrentStyleForReason:(long long)arg1;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (long long)currentStyle;
- (id)nextTransition;
- (void)toggleCurrentStyle;
- (void)toggleCurrentStyleWithOverrideTiming:(long long)arg1;
- (void)userInterfaceStyleModeDidChange:(id)arg1;

@end
