
@interface ACMSignInDialogSimple_Modern : ACMSignInDialogCustom <ACMSignInDialogSimpleProtocol> {
    NSString * _accountNameFieldPlaceholder;
    NSArray * _burButtonItems;
    UIView * _container;
    UIImage * _logo;
    UIImageView * _logoView;
    UIToolbar * _toolbar;
}

@property (nonatomic, retain) NSString *accountNameFieldPlaceholder;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) NSArray *burButtonItems;
@property (nonatomic, retain) UIView *container;
@property (readonly, copy) NSString *debugDescription;
@property <ACMSignInDialogDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *iForgotImage;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, retain) UIImageView *logoView;
@property NSString *passwordString;
@property (nonatomic, retain) NSString *requestedUserName;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIToolbar *toolbar;
@property (readonly) NSString *userNameString;
@property (nonatomic, readonly) double widgetConstraintConstant;
@property (nonatomic, readonly) double widgetConstraintMultiplier;

- (id)accountNameField;
- (id)accountNameFieldPlaceholder;
- (void)buildConstraints;
- (void)buildHorizontalConstraints;
- (void)buildVerticalConstraints;
- (void)buildWidgetContentGroupHorizontalConstraints;
- (void)buildWidgetContentGroupVerticalConstraints;
- (id)burButtonItems;
- (bool)canSignIn;
- (void)checkFields;
- (id)container;
- (id)createCancelItem;
- (id)createIForgotItem;
- (id)darkDisabledTextColor;
- (id)darkTextColor;
- (void)dealloc;
- (void)disableControls:(bool)arg1;
- (id)iForgotImage;
- (void)loadView;
- (id)logo;
- (id)logoView;
- (id)passwordField;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)setAccountNameFieldPlaceholder:(id)arg1;
- (void)setBurButtonItems:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setToolbar:(id)arg1;
- (bool)shouldAuthenticateOnUserInput;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldManuallyChangeStatusBarStyle;
- (bool)standardViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tintColor;
- (id)toolbar;
- (bool)userNameFieldEditable;
- (void)viewDidAppear:(bool)arg1;
- (id)widget;
- (Class)widgetClass;
- (double)widgetConstraintConstant;
- (double)widgetConstraintMultiplier;

@end
