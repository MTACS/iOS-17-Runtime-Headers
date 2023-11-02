
@interface SMUPasswordController : NSObject <TVRAlertControllerDelegate> {
    SMUPasswordAlertController * _alertController;
    id /* block */  _passwordEnteredHandler;
    id /* block */  _passwordEntryCancelledHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ passwordEnteredHandler;
@property (nonatomic, copy) id /* block */ passwordEntryCancelledHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)alertController:(id)arg1 enteredText:(id)arg2;
- (void)alertController:(id)arg1 generatedTextInputPayload:(id)arg2;
- (void)alertControllerCancelled:(id)arg1;
- (void)alertControllerHitKeyboardReturnKey:(id)arg1;
- (void)alertControllerPressedDictationButton:(id)arg1;
- (void)alertControllerReleasedDictationButton:(id)arg1;
- (void)dismiss;
- (id)initWithTitle:(id)arg1 passwordLength:(long long)arg2 supportedOrientations:(unsigned long long)arg3;
- (id /* block */)passwordEnteredHandler;
- (id /* block */)passwordEntryCancelledHandler;
- (void)setPasswordEnteredHandler:(id /* block */)arg1;
- (void)setPasswordEntryCancelledHandler:(id /* block */)arg1;
- (id)viewController;

@end
