
@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing> {
    NSString * _autoFillContextProtocolObjectUUID;
    <_SFAutoFillContextProviding> * _autoFillContextProvider;
    long long  _currentInterfaceOrientation;
    NSLayoutConstraint * _heightConstraint;
    SFAutomaticPasswordInputView * _inputView;
    long long  _keyboardType;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeKeyboardSize;
    NSString * _password;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitKeyboardSize;
}

@property (nonatomic) <_SFAutoFillContextProviding> *autoFillContextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 overrideApplicationIdentifier:(id)arg3 completion:(id /* block */)arg4;
+ (void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 completion:(id /* block */)arg3;
+ (void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 overrideApplicationIdentifier:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_currentKeyboardSize;
- (void)_dismissKeyboard:(id)arg1;
- (bool)_inputViewControllerShouldDirectlyInsertPassword;
- (void)_postButtonPressedNotificationForButton:(long long)arg1;
- (void)_updateKeyboardHeight;
- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
- (id)autoFillContextProvider;
- (void)dismissKeyboardPreservingFirstResponderIfNecessary;
- (id)initWithPassword:(id)arg1 keyboardType:(long long)arg2;
- (void)inputViewControllerDidSelectUseCustomPassword:(id)arg1;
- (void)inputViewControllerDidSelectUseStrongPassword:(id)arg1;
- (id)inputViewControllerOtherOptionsMenu:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForInputView:(id)arg1;
- (void)setAutoFillContextProvider:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
