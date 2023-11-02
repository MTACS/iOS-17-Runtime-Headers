
@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _completionLock;
    <AAUIPasscodeValidationDelegate> * _delegate;
    AAUICDPHelper * _helper;
    PSSetupController * _navController;
    id /* block */  _passcodeValidationCompletion;
    AAUIDevicePINController * _pinController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIPasscodeValidationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)stingrayControllerWithPresenter:(id)arg1;
+ (id)stingrayControllerWithPresenter:(id)arg1 forceInline:(bool)arg2;

- (void).cxx_destruct;
- (id)_presentingViewController;
- (void)_setupNavController;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (id)_specifierForMode:(int)arg1;
- (void)createPasscodeStateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)devicePINController:(id)arg1 canCancelWithCompletion:(id /* block */)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)dismissFlowWithLocalSecret:(id)arg1 error:(id)arg2;
- (id /* block */)passcodeValidationCompletion;
- (void)setDelegate:(id)arg1;
- (void)setPasscodeValidationCompletion:(id /* block */)arg1;
- (void)validatePasscodeStateWithCompletion:(id /* block */)arg1;
- (void)validateStingrayPasscodeStateWithCompletion:(id /* block */)arg1;

@end
