
@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel> {
    NSString * _buttonLockupTitle;
    <VSOnscreenCodeViewModelDelegate> * _delegate;
    UIImage * _logo;
    NSString * _logoAccessibilityLabel;
    NSItemProvider * _logoProvider;
    NSString * _onscreenCode;
    UIImage * _qrCode;
    bool  _showButtonLockup;
    NSString * _webPageLabel;
    NSURL * _webPageURL;
    bool  logoFinishedLoading;
}

@property (nonatomic, copy) NSString *buttonLockupTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSOnscreenCodeViewModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, copy) NSString *logoAccessibilityLabel;
@property (nonatomic) bool logoFinishedLoading;
@property (nonatomic, retain) NSItemProvider *logoProvider;
@property (nonatomic, copy) NSString *onscreenCode;
@property (nonatomic, retain) UIImage *qrCode;
@property (nonatomic) bool showButtonLockup;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *webPageLabel;
@property (nonatomic, copy) NSURL *webPageURL;

- (void).cxx_destruct;
- (id)buttonLockupTitle;
- (void)configureWithRequest:(id)arg1;
- (id)delegate;
- (id)formattedWebsiteURL;
- (void)generateQRCode;
- (id)logo;
- (id)logoAccessibilityLabel;
- (bool)logoFinishedLoading;
- (id)logoProvider;
- (id)onscreenCode;
- (id)qrCode;
- (void)setButtonLockupTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoAccessibilityLabel:(id)arg1;
- (void)setLogoFinishedLoading:(bool)arg1;
- (void)setLogoProvider:(id)arg1;
- (void)setOnscreenCode:(id)arg1;
- (void)setQrCode:(id)arg1;
- (void)setShowButtonLockup:(bool)arg1;
- (void)setWebPageLabel:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (bool)showButtonLockup;
- (id)webPageLabel;
- (id)webPageURL;
- (id)websiteURLWithQueryParameters;

@end
