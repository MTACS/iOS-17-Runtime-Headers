
@interface DKPasscodeViewController : OBPasscodeViewController <OBPasscodeViewControllerDelegate> {
    id /* block */  _passcodeVerified;
    int  _simplePasscodeType;
    id /* block */  _verifyPasscode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ passcodeVerified;
@property (nonatomic) int simplePasscodeType;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ verifyPasscode;

- (void).cxx_destruct;
- (id)completionButtonTitleForPasscodeViewController:(id)arg1;
- (id)init;
- (id /* block */)passcodeVerified;
- (void)passcodeViewController:(id)arg1 didEnterPasscode:(id)arg2;
- (bool)passcodeViewController:(id)arg1 shouldEnableCompletionButtonForPasscode:(id)arg2;
- (void)setPasscodeVerified:(id /* block */)arg1;
- (void)setSimplePasscodeType:(int)arg1;
- (void)setUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2;
- (void)setVerifyPasscode:(id /* block */)arg1;
- (int)simplePasscodeType;
- (id /* block */)verifyPasscode;

@end
