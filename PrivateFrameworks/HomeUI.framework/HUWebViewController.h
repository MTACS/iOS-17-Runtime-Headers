
@interface HUWebViewController : UIViewController <HUPreloadableViewController, WKNavigationDelegate> {
    NSURL * _URL;
    HMHTMLDocument * _document;
    NAFuture * _loadingFuture;
    bool  _scrollEnabled;
    bool  _showsShareButton;
    WKWebView * _webView;
    bool  _zoomEnabled;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HMHTMLDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NAFuture *loadingFuture;
@property (nonatomic) bool scrollEnabled;
@property (nonatomic) bool showsShareButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic) bool zoomEnabled;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (void)_share:(id)arg1;
- (bool)_shouldShare;
- (void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (id)document;
- (id)hu_preloadContent;
- (id)initWithDocument:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)loadView;
- (id)loadingFuture;
- (bool)scrollEnabled;
- (void)setScrollEnabled:(bool)arg1;
- (void)setShowsShareButton:(bool)arg1;
- (void)setZoomEnabled:(bool)arg1;
- (bool)showsShareButton;
- (void)viewWillAppear:(bool)arg1;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (bool)zoomEnabled;

@end
