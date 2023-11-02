
@interface LoadingController : NSObject {
    NSURL * _URL;
    <LoadingControllerDelegate> * _delegate;
    NSString * _title;
    WKWebView * _webView;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSURL *URLForStatePersisting;
@property (nonatomic, readonly) bool canGoBack;
@property (nonatomic, readonly) bool canGoForward;
@property (nonatomic) <LoadingControllerDelegate> *delegate;
@property (nonatomic) float estimatedProgress;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSString *titleForStatePersisting;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (id)URL;
- (id)URLForStatePersisting;
- (bool)canGoBack;
- (bool)canGoForward;
- (id)delegate;
- (float)estimatedProgress;
- (void)goBack;
- (void)goForward;
- (id)loadRequest:(id)arg1 userDriven:(bool)arg2;
- (id)loadRequest:(id)arg1 userDriven:(bool)arg2 shouldOpenExternalURLs:(bool)arg3;
- (id)loadRequest:(id)arg1 userDriven:(bool)arg2 shouldOpenExternalURLs:(bool)arg3 eventAttribution:(id)arg4;
- (void)reloadFromOrigin:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedProgress:(float)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)stopLoading;
- (id)title;
- (id)titleForStatePersisting;
- (id)webView;

@end
