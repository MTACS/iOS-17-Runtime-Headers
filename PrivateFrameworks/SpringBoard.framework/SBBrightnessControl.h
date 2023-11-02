
@interface SBBrightnessControl : NSObject <SBBrightnessRouteCoordinating, SBElasticBrightnessDataSource, SBElasticHUDViewControllerDelegate> {
    SBHUDController * _HUDController;
    <SBBrightnessRouteControlling> * _activeController;
    bool  _brightnessDecrementKeyIsDown;
    bool  _brightnessIncrementKeyIsDown;
    bool  _controlCenterIsPresented;
    SBDisplayBrightnessController * _displayBrightnessController;
    SBKeyboardBrightnessController * _keyboardBrightnessController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)handlesKeyCommandsForRoute:(long long)arg1;

- (void).cxx_destruct;
- (bool)_HUDIsDisplayable;
- (bool)_HUDIsDisplayableWithReason:(out id*)arg1;
- (void)_controlCenterWillDismiss:(id)arg1;
- (void)_controlCenterWillPresent:(id)arg1;
- (id)_controllerForRoute:(long long)arg1;
- (void)_handleUpdateBrightnessIncrementKeyIsDown:(bool)arg1 decrementKeyIsDown:(bool)arg2;
- (void)_presentOrUpdateBrightnessHUDAsNecessaryForBrightnessLevel:(float)arg1;
- (void)_resetIdleTimerForUserInteractionIfNecessary;
- (id)acquireBrightnessHUDHiddenAssertionForReason:(id)arg1;
- (id)activeDataSource;
- (void)brightnessController:(id)arg1 performCoordinatedBrightnessChangeForIncrementKeyDown:(bool)arg2 decrementKeyDown:(bool)arg3;
- (void)cancelBrightnessKeyPressEvents;
- (long long)elasticBrightnessViewControllerBrightnessRouteType:(id)arg1;
- (void)elasticBrightnessViewControllerValueUpdatesDidEnd:(id)arg1;
- (void)elasticBrightnessViewControllerValueUpdatesWillBegin:(id)arg1;
- (bool)elasticHUDViewControllerCanBePresented:(id)arg1 withReason:(out id*)arg2;
- (void)elasticHUDViewControllerRequestsDismissal:(id)arg1;
- (bool)elasticValueViewController:(id)arg1 updateCurrentValue:(float)arg2;
- (float)elasticValueViewControllerCurrentValue:(id)arg1;
- (id)existingBrightnessHUDViewController;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { }*)arg1 forRoute:(long long)arg2;
- (id)initWithHUDController:(id)arg1;
- (id)presentedBrightnessHUDViewController;
- (void)setActiveController:(id)arg1;
- (void)setBrightnessLevel:(float)arg1 forRoute:(long long)arg2;

@end
