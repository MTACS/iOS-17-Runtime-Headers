
@interface ACMiTunesSignInDialog : ACMSignInDialog <ACMiTunesSignInDialogProtocol, UIAlertViewDelegate> {
    NSString * _alertViewPrompt;
    bool  _isShown;
    bool  _isUserNameEditable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _passwordFrame;
    long long  _previousInterfaceOrientation;
    NSString * _titleField;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleStringSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _userNameFrame;
}

@property (nonatomic, retain) NSString *alertViewPrompt;
@property (readonly, copy) NSString *debugDescription;
@property <ACMSignInDialogDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isPortraitMode;
@property bool isShown;
@property (nonatomic) bool isUserNameEditable;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } passwordFrame;
@property NSString *passwordString;
@property (nonatomic) long long previousInterfaceOrientation;
@property (nonatomic, retain) NSString *requestedUserName;
@property (nonatomic, readonly) UIAlertView *signInDialog;
@property (readonly) Class superclass;
@property (retain) NSString *titleField;
@property (nonatomic) struct CGSize { double x1; double x2; } titleStringSize;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } userNameFrame;
@property (readonly) NSString *userNameString;

- (id)alertViewPrompt;
- (void)cancel;
- (bool)changeTitleStringIfNeeded;
- (void)dealloc;
- (id)dialogTitle;
- (void)didPresentAlertView:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)disableControls:(bool)arg1;
- (void)handleRotation;
- (void)handleTextFieldShouldReturnOnNonPasswordField;
- (void)hideWithParentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)isPortraitMode;
- (bool)isShown;
- (bool)isUserNameEditable;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })passwordFrame;
- (id)passwordString;
- (long long)previousInterfaceOrientation;
- (void)setAlertViewPrompt:(id)arg1;
- (void)setIsShown:(bool)arg1;
- (void)setIsUserNameEditable:(bool)arg1;
- (void)setPreviousInterfaceOrientation:(long long)arg1;
- (void)setTitleField:(id)arg1;
- (void)setTitleStringSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldPasswordTextFieldReturnOnSignInDisallowed;
- (void)showWithParentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)signInDialog;
- (long long)statusBarStyle;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleField;
- (struct CGSize { double x1; double x2; })titleStringSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userNameFrame;
- (id)userNameString;
- (void)viewDidLoad;

@end
