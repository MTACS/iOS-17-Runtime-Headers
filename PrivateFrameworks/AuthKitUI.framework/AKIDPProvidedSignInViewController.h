
@interface AKIDPProvidedSignInViewController : UIViewController <AKIDPHandlerDelegate, AKIDPPresentationController> {
    AKIDPHandler * _idpHandler;
    UIImageView * _secureIconView;
    UILabel * _titleLabel;
    UIStackView * _titleStackView;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKIDPHandler *idpHandler;
@property (nonatomic, retain) UIImageView *secureIconView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIStackView *titleStackView;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (void)IDPHandler:(id)arg1 didFinishLoadingPageInWebView:(id)arg2;
- (void)IDPHandler:(id)arg1 didStartLoadingPageInWebView:(id)arg2;
- (void)_cancelBarButtonPressed:(id)arg1;
- (void)_setNavigationTitle:(id)arg1;
- (id)idpHandler;
- (id)initWithIDPHandler:(id)arg1;
- (void)loadView;
- (id)secureIconView;
- (void)setIdpHandler:(id)arg1;
- (void)setSecureIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleStackView:(id)arg1;
- (void)setupTitleView;
- (id)titleLabel;
- (id)titleStackView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)webView;

@end
