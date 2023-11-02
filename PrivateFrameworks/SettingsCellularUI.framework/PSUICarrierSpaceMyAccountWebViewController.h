
@interface PSUICarrierSpaceMyAccountWebViewController : UIViewController {
    UIBarButtonItem * _cancelButton;
    NSURL * _myAccountURL;
    WKWebView * _webView;
}

@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) NSURL *myAccountURL;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)addCancelButton;
- (id)cancelButton;
- (void)dismissMyAccount;
- (id)initWithURLString:(id)arg1;
- (id)initWithWebView:(id)arg1 url:(id)arg2;
- (void)loadView;
- (id)myAccountURL;
- (void)setCancelButton:(id)arg1;
- (void)setMyAccountURL:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)viewDidLoad;
- (id)webView;

@end
