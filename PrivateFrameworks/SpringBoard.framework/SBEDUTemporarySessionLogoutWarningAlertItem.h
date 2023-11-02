
@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem {
    id /* block */  _logoutActionHandler;
}

@property (nonatomic, copy) id /* block */ logoutActionHandler;

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)forcesModalAlertAppearance;
- (id /* block */)logoutActionHandler;
- (void)setLogoutActionHandler:(id /* block */)arg1;
- (bool)shouldShowInLockScreen;

@end
