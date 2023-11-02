
@interface TPSCloudCallingWebViewController : UIViewController <UIWebViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    NSData * _body;
    id /* block */  _completionBlock;
    long long  _type;
    NSURL * _url;
    UIWebView * _webView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) NSData *body;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresentingURL, nonatomic, readonly) bool presentingURL;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, readonly, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)_cancelButtonClicked:(id)arg1;
- (id)activityIndicator;
- (id)body;
- (void)cancelWebView;
- (id /* block */)completionBlock;
- (void)doProvisioningCanceled;
- (void)doProvisioningDone;
- (void)doProvisioningFailed;
- (void)doWebViewTimedOut;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithType:(long long)arg1;
- (bool)isPresentingURL;
- (void)loadURL:(id)arg1 body:(id)arg2 completion:(id /* block */)arg3;
- (void)loadView;
- (void)loadWebViewWithSpinner:(id /* block */)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setupControllerInWebFrame:(id)arg1;
- (long long)type;
- (void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (id)url;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;

@end
