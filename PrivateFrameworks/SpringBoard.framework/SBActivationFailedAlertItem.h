
@interface SBActivationFailedAlertItem : SBAlertItem {
    bool  _showRetryButton;
    bool  _showSupportNumber;
    long long  _slot;
}

- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithFailureCount:(int)arg1 slot:(long long)arg2;
- (void)performUnlockAction;
- (bool)suppressForKeynote;

@end
