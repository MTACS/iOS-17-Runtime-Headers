
@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem <SiriUICarDNDDelegate> {
    id /* block */  _notDrivingActionHandler;
    bool  _showSiriHeaderViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ notDrivingActionHandler;
@property (nonatomic) bool showSiriHeaderViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)controllerDidProvideContext:(id)arg1;
- (bool)forcesModalAlertAppearance;
- (id /* block */)notDrivingActionHandler;
- (bool)reappearsAfterUnlock;
- (void)setNotDrivingActionHandler:(id /* block */)arg1;
- (void)setShowSiriHeaderViewController:(bool)arg1;
- (bool)shouldShowInLockScreen;
- (bool)showSiriHeaderViewController;

@end
