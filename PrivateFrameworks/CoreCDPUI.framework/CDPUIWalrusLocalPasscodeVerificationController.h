
@interface CDPUIWalrusLocalPasscodeVerificationController : NSObject <CDPUIDelegate> {
    CDPContext * _context;
    unsigned long long  _presentationType;
    CDPStateController * _stateController;
    NSString * _title;
    CDPUIController * _uiController;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupControllers;
- (void)finishWalrusLocalPasscodeVerificationWithCompletion:(id /* block */)arg1;
- (id)initWithTitle:(id)arg1 presentWithViewController:(id)arg2 presentationType:(unsigned long long)arg3;
- (void)uiController:(id)arg1 didPresentRootViewController:(id)arg2;
- (void)uiController:(id)arg1 prepareAlertContext:(id /* block */)arg2;
- (void)uiController:(id)arg1 preparePresentationContext:(id /* block */)arg2;

@end
