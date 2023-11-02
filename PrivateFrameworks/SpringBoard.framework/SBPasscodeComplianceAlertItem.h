
@interface SBPasscodeComplianceAlertItem : SBAlertItem {
    NSString * _cancelButtonTitle;
    NSString * _continueButtonTitle;
    NSString * _message;
    NSString * _title;
}

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 continueButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (bool)shouldShowInLockScreen;

@end
