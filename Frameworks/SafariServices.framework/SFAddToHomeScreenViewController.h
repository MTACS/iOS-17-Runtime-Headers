
@interface SFAddToHomeScreenViewController : UIViewController <SFAddToHomeScreenRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate, SFWebAppDataProviderDelegate, _UIRemoteViewControllerContaining> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    id /* block */  _completionHandler;
    NSURL * _initialURL;
    _WKApplicationManifest * _manifest;
    SFWebAppDataProvider * _provider;
    SFAddToHomeScreenRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFAddToHomeScreenServiceProtocol> * _serviceProxy;
    NSDictionary * _webClipMetadataFetcherResult;
    WKWebView * _webView;
    UINavigationController * _wrappingPlaceholderNavigationController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPlaceholderView;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_connectToService;
- (id)_containedRemoteViewController;
- (void)_didLoadRemoteViewController:(id)arg1;
- (void)_fetchWebClipMetadataViaJavaScript;
- (void)_initializeViewService;
- (void)_removePlaceholderView;
- (void)dataProvider:(id)arg1 didFinishWithResult:(bool)arg2;
- (id)initWithURL:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithWebView:(id)arg1 completion:(id /* block */)arg2;
- (void)loadView;
- (void)remoteViewController:(id)arg1 didFinishWithResult:(bool)arg2;
- (id)serviceProxy;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)viewDidLoad;

@end
