
@interface CDPUIDeviceToDeviceEncryptionPasscodeController : NSObject <BFFPasscodeViewControllerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _completionLock;
    <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> * _delegate;
    id /* block */  _passcodeValidationCompletion;
    BFFPasscodeViewController * _passcodeViewController;
    UIViewController * _presentingViewController;
    <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> * _vm;
}

@property (nonatomic) <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> *delegate;

+ (id)passcodeControllerWithPresenter:(id)arg1 vm:(id)arg2;

- (void).cxx_destruct;
- (void)_userTappedCancel:(id)arg1;
- (void)createPasscodeStateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissFlowWithLocalSecret:(id)arg1 error:(id)arg2;
- (id /* block */)passcodeValidationCompletion;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (bool)passcodeViewControllerAllowSkip:(id)arg1;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscodeValidationCompletion:(id /* block */)arg1;

@end
