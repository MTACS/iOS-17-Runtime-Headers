
@interface ACMSignInDialogCustom : ACMSignInDialog <ACMSignInDialogCustomProtocol, ACMSignInWidgetDelegate> {
    UIBarButtonItem * _cancelBarButton;
    UIButton * _cancelButton;
    UIBarButtonItem * _signInBarButton;
    UIButton * _signInButton;
    bool  _userNameFieldEditable;
    <ACMSignInWidgetProtocol> * _widget;
    NSString * _widgetAccountLabel;
    Class  _widgetClass;
    long long  _widgetPasswordReturnKeyType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _widgetPosition;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIBarButtonItem *cancelBarButton;
@property (nonatomic, retain) UIButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property <ACMSignInDialogDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSString *passwordString;
@property (nonatomic, retain) NSString *requestedUserName;
@property (nonatomic) bool shouldAuthenticateOnUserInput;
@property (nonatomic, retain) UIBarButtonItem *signInBarButton;
@property (nonatomic, retain) UIButton *signInButton;
@property (nonatomic, readonly) bool standardViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool userNameFieldEditable;
@property (readonly) NSString *userNameString;
@property (nonatomic, readonly, retain) <ACMSignInWidgetProtocol> *widget;
@property (nonatomic) NSString *widgetAccountLabel;
@property (nonatomic, retain) Class widgetClass;
@property (nonatomic) long long widgetPasswordReturnKeyType;
@property (nonatomic) struct CGPoint { double x1; double x2; } widgetPosition;

- (id)backgroundColor;
- (bool)canSignIn;
- (id)cancelBarButton;
- (id)cancelButton;
- (void)checkFields;
- (void)dealloc;
- (void)disableControls:(bool)arg1;
- (void)hideWithParentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)loadView;
- (void)onIForgot:(id)arg1;
- (void)onSignIn:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCancelBarButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setRequestedUserName:(id)arg1;
- (void)setShouldAuthenticateOnUserInput:(bool)arg1;
- (void)setSignInBarButton:(id)arg1;
- (void)setSignInButton:(id)arg1;
- (void)setUserNameFieldEditable:(bool)arg1;
- (void)setWidgetAccountLabel:(id)arg1;
- (void)setWidgetClass:(Class)arg1;
- (void)setWidgetPasswordReturnKeyType:(long long)arg1;
- (void)setWidgetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setupCustomView;
- (bool)shouldAuthenticateOnUserInput;
- (void)showWithParentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)signInBarButton;
- (id)signInButton;
- (bool)standardViewController;
- (bool)userNameFieldEditable;
- (id)widget;
- (id)widgetAccountLabel;
- (Class)widgetClass;
- (long long)widgetPasswordReturnKeyType;
- (struct CGPoint { double x1; double x2; })widgetPosition;

@end
