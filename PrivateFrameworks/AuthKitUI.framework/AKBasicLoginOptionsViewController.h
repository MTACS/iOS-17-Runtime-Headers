
@interface AKBasicLoginOptionsViewController : UIViewController {
    AKAppleIDAuthenticationInAppContext * _context;
    UIButton * _createButton;
    id /* block */  _createIDAction;
    id /* block */  _forgotAction;
    UIButton * _forgotButton;
    bool  _isCreateAppleIDAllowed;
    OBPrivacyLinkController * _privacyController;
    UIStackView * _stackView;
}

@property (nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (nonatomic, retain) UIButton *createButton;
@property (nonatomic, copy) id /* block */ createIDAction;
@property (nonatomic, copy) id /* block */ forgotAction;
@property (nonatomic, retain) UIButton *forgotButton;
@property (nonatomic) bool isCreateAppleIDAllowed;
@property (nonatomic, retain) OBPrivacyLinkController *privacyController;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_configureButtonForFontAdjustment:(id)arg1;
- (id)_createLinkButtonWithSelector:(SEL)arg1;
- (void)_refreshCreateAppleIDButton;
- (void)_setupPrivacyLinkControllerWithContext:(id)arg1;
- (void)_setupStackView;
- (bool)_shouldHideCreateButton;
- (id)context;
- (id)createButton;
- (id /* block */)createIDAction;
- (void)createPressed:(id)arg1;
- (id /* block */)forgotAction;
- (id)forgotButton;
- (void)forgotPressed:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isCreateAppleIDAllowed;
- (id)privacyController;
- (void)setContext:(id)arg1;
- (void)setCreateButton:(id)arg1;
- (void)setCreateIDAction:(id /* block */)arg1;
- (void)setForgotAction:(id /* block */)arg1;
- (void)setForgotButton:(id)arg1;
- (void)setIsCreateAppleIDAllowed:(bool)arg1;
- (void)setPrivacyController:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)viewDidLoad;

@end
