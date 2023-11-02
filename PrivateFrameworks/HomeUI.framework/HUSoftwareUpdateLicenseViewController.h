
@interface HUSoftwareUpdateLicenseViewController : UIViewController <HUPreloadableViewController, MFMailComposeViewControllerDelegate, UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate> {
    NSURL * _URL;
    id /* block */  _agreeHandler;
    id /* block */  _disagreeHandler;
    HMHTMLDocument * _document;
    NSFileManager * _fileManager;
    NSString * _license;
    UIButton * _retainCopyOfTermsButton;
    UIScrollView * _scrollView;
    HUWebViewController * _webViewController;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, copy) id /* block */ agreeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ disagreeHandler;
@property (nonatomic, readonly, copy) HMHTMLDocument *document;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *license;
@property (nonatomic, readonly) UIButton *retainCopyOfTermsButton;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) HUWebViewController *webViewController;

- (void).cxx_destruct;
- (id)URL;
- (void)_agreeToTerms:(id)arg1;
- (void)_disagreeToTerms:(id)arg1;
- (void)_emailTermsAndConditions:(id)arg1;
- (id)_evaluateHeight:(id)arg1;
- (id)_initWithWebViewController:(id)arg1;
- (id /* block */)agreeHandler;
- (id /* block */)disagreeHandler;
- (id)document;
- (id)fileManager;
- (id)hu_preloadContent;
- (id)initWithDocument:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)license;
- (id)loadLicense;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)retainCopyOfTermsButton;
- (id)scrollView;
- (void)setAgreeHandler:(id /* block */)arg1;
- (void)setDisagreeHandler:(id /* block */)arg1;
- (void)setFileManager:(id)arg1;
- (void)setLicense:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webView;
- (id)webViewController;

@end
