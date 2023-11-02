
@interface DKScreenTimePasscodeViewController : OBPasscodeViewController <OBPasscodeViewControllerDelegate> {
    id /* block */  _passcodeVerified;
    id /* block */  _verifyPasscode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ passcodeVerified;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ verifyPasscode;

- (void).cxx_destruct;
- (id)completionButtonTitleForPasscodeViewController:(id)arg1;
- (id)initWithDeviceName:(id)arg1;
- (id /* block */)passcodeVerified;
- (void)passcodeViewController:(id)arg1 didEnterPasscode:(id)arg2;
- (bool)passcodeViewController:(id)arg1 shouldEnableCompletionButtonForPasscode:(id)arg2;
- (void)setPasscodeVerified:(id /* block */)arg1;
- (void)setVerifyPasscode:(id /* block */)arg1;
- (id /* block */)verifyPasscode;

@end
