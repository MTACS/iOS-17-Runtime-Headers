
@interface NDOAppleCareWebViewController : UIViewController <UINavigationBarDelegate, WKNavigationDelegate> {
    UINavigationBar * _headerView;
    bool  _initialLoadCompleted;
    NSString * _params;
    <NDOAppleCareWebViewPresenterProtocol> * _presenter;
    int  _retriesRemaining;
    NSString * _serialNumber;
    NSString * _source;
    UIActivityIndicatorView * _spinner;
    NDOWarranty * _warranty;
    UINavigationItem * _webViewNavigationItem;
    WKWebView * _webview;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property UINavigationBar *headerView;
@property bool initialLoadCompleted;
@property (retain) NSString *params;
@property <NDOAppleCareWebViewPresenterProtocol> *presenter;
@property int retriesRemaining;
@property (retain) NSString *serialNumber;
@property (retain) NSString *source;
@property (nonatomic) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (retain) NDOWarranty *warranty;
@property (retain) UINavigationItem *webViewNavigationItem;
@property WKWebView *webview;

- (void).cxx_destruct;
- (void)cancelTapped:(id)arg1;
- (void)dealloc;
- (id)headerView;
- (id)initWithWarranty:(id)arg1 serialNumber:(id)arg2;
- (id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 params:(id)arg3;
- (id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 params:(id)arg3 source:(id)arg4;
- (bool)initialLoadCompleted;
- (void)loadView;
- (void)loadWebview:(bool)arg1;
- (bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)params;
- (id)presenter;
- (int)retriesRemaining;
- (id)serialNumber;
- (void)setHeaderView:(id)arg1;
- (void)setInitialLoadCompleted:(bool)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)setParams:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setRetriesRemaining:(int)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setWarranty:(id)arg1;
- (void)setWebViewNavigationItem:(id)arg1;
- (void)setWebview:(id)arg1;
- (id)source;
- (id)spinner;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)warranty;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (id)webViewNavigationItem;
- (id)webview;

@end
