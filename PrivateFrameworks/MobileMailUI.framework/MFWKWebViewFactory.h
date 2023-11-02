
@interface MFWKWebViewFactory : NSObject <EFLoggable, MEContentRuleListManagerObserver> {
    NSHashTable * _configurations;
    EFAutoCancelationToken * _contentRuleListManagerObserverCancelable;
    EMRemoteContentURLSchemeHandler * _noProxySchemeHandler;
    EFQueue * _preallocatedWebViews;
    WKProcessPool * _processPool;
    EMRemoteContentURLSchemeHandler * _proxySchemeHandler;
    EMRemoteContentURLSession * _urlSession;
}

@property (nonatomic, retain) NSHashTable *configurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EFQueue *preallocatedWebViews;
@property (nonatomic, retain) WKProcessPool *processPool;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EMRemoteContentURLSession *urlSession;

+ (id)log;
+ (void)setDaemonInterface:(id)arg1 URLCacheWithMemoryCapacity:(unsigned long long)arg2;
+ (id)sharedWebViewFactory;
+ (id)sharedWebViewFactoryFuture;

- (void).cxx_destruct;
- (id)_createConfiguration:(bool)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)_instantiateWebView:(bool)arg1;
- (id)configurations;
- (void)contentRuleListManager:(id)arg1 didAddRuleList:(id)arg2;
- (void)contentRuleListManager:(id)arg1 didRemoveRuleList:(id)arg2;
- (void)contentRuleListManager:(id)arg1 didUpdateContentRuleList:(id)arg2 oldContentRuleList:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteContentURLCache:(id)arg1;
- (void)preallocateWebViewIfNeeded;
- (void)preallocateWebViews;
- (id)preallocatedWebViews;
- (id)processPool;
- (void)setConfigurations:(id)arg1;
- (void)setContentRuleListManager:(id)arg1;
- (void)setPreallocatedWebViews:(id)arg1;
- (void)setProcessPool:(id)arg1;
- (id)urlSession;
- (id)webView;

@end
