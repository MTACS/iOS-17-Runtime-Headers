
@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem {
    bool  _newAccount;
    bool  _promptToDisable;
}

@property (getter=isNewAccount, nonatomic) bool newAccount;

- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithAccountURL:(id)arg1 newAccount:(bool)arg2 promptToDisable:(bool)arg3;
- (bool)isNewAccount;
- (void)notNow;
- (void)setNewAccount:(bool)arg1;

@end
