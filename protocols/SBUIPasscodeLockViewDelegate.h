
@protocol SBUIPasscodeLockViewDelegate <NSObject>

@optional

- (void)passcodeLockViewCancelButtonPressed:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeEntered:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id <SBUIPasscodeLockView>)arg1;
- (void)passcodeLockViewStateChange:(id <SBUIPasscodeLockView>)arg1;

@end
