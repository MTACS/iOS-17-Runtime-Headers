
@interface SFWebAppDataProvider : NSObject <WKNavigationDelegate, WebClipDelegate, _SFWebClipViewControllerDelegate> {
    _SFInjectedJavaScriptController * _activityJSController;
    WBSApplicationManifestFetcher * _applicationManifestFetcher;
    UIImage * _bestManifestIcon;
    <SFWebAppDataProviderDelegate> * _delegate;
    _WKApplicationManifest * _manifest;
    NSArray * _manifestIcons;
    UIColor * _pageThemeColor;
    UIImage * _touchIcon;
    bool  _touchIconPrecomposed;
    UIColor * _underPageBackgroundColor;
    bool  _waitingForSnapshot;
    UIWebClip * _webClip;
    bool  _webClipConfigured;
    _SFWebClipMetadataFetcher * _webClipMetadataFetcher;
    _SFWebClipViewController * _webClipViewController;
    WKWebView * _webView;
    UINavigationController * _wrappingNavigationController;
}

@property (nonatomic, readonly) UIViewController *activityViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFWebAppDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createWebClipFromWebView;
- (void)_createWebView;
- (void)_downloadManifestIconWithCompletionHandler:(id /* block */)arg1;
- (void)_finishPreparingFromWebView;
- (bool)_isWhiteColor:(id)arg1;
- (void)_updateManifestValues;
- (void)_updateMonogramIconForWebClip;
- (id)activityViewController;
- (void)dealloc;
- (id)delegate;
- (void)prepareWithManifestData:(id)arg1;
- (void)prepareWithURL:(id)arg1;
- (void)setContentReadyForDisplay;
- (void)setDelegate:(id)arg1;
- (void)updateWithWebClipMetadata:(id)arg1;
- (void)webClip:(id)arg1 iconRequestDidFinishWithImage:(id)arg2 precomposed:(bool)arg3;
- (void)webClip:(id)arg1 startupImageRequestDidFinishWithImage:(id)arg2;
- (void)webClip:(id)arg1 startupLandscapeImageRequestDidFinishWithImage:(id)arg2;
- (void)webClipViewController:(id)arg1 didFinishWithResult:(bool)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
