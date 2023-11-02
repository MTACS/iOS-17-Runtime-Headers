
@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {
    bool  _alreadySubmittedPassword;
    NSString * _errorString;
    bool  _hasEmergencyCall;
    int  _mode;
    int  _simplePasscodeType;
    int  _unlockScreenType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearAlertController;
- (void)_setErrorString:(id)arg1;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)configureTextField:(id)arg1;
- (void)dealloc;
- (void)didEndCall;
- (id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3;
- (void)makeEmergencyCall;
- (bool)shouldShowInLockScreen;
- (void)submitPassword;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;

@end
