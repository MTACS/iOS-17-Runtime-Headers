
@interface PKPayLaterView : UIView <WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate> {
    long long  _action;
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    <PKPayLaterViewDelegate> * _delegate;
    bool  _didFinishInitialViewLoad;
    long long  _displayStyle;
    long long  _documentReadyCounter;
    unsigned long long  _environmentType;
    <PKPayLaterViewInternalDelegate> * _internalDelegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIActivityIndicatorView * _spinner;
    unsigned long long  _theme;
    PKPayLaterMerchandisingUtilities * _utilities;
    WKWebView * _webView;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPayLaterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayStyle;
@property (nonatomic) unsigned long long environmentType;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPayLaterViewInternalDelegate> *internalDelegate;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long theme;

+ (void)showSpinnerView:(bool)arg1 spinnerView:(id)arg2 showWebView:(bool)arg3 webView:(id)arg4 animate:(bool)arg5 completion:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)_configuration;
- (id)_javaScriptQueryForUpdatedConfigurationProperty:(unsigned long long)arg1 configuration:(id)arg2;
- (void)_recalculateSizeWithCompletion:(id /* block */)arg1;
- (void)_registerForUserInterfaceStyleChanges;
- (void)_reloadViewContentsForProperty:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_setupWebView:(id)arg1 completion:(id /* block */)arg2;
- (id)_webViewConfiguration;
- (long long)action;
- (id)amount;
- (void)clearWebViewCache;
- (id)currencyCode;
- (id)delegate;
- (void)didMoveToWindow;
- (long long)displayStyle;
- (unsigned long long)environmentType;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)internalDelegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAction:(long long)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayStyle:(long long)arg1;
- (void)setEnvironmentType:(unsigned long long)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setTheme:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)theme;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewDidClose:(id)arg1;

@end
