
@interface WFWebViewController : UIViewController {
    <WFWebViewControllerDelegate> * _delegate;
    WKWebView * _webView;
}

@property (nonatomic) <WFWebViewControllerDelegate> *delegate;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)done;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)updateNavigationItems;
- (id)webView;

@end
