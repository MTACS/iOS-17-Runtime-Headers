
@interface NEProvider : NSObject <NSExtensionRequestHandling> {
    NSString * _appName;
    NEExtensionProviderContext * _context;
    NWPath * _defaultPath;
    NWPathEvaluator * _defaultPathEvaluator;
}

@property (retain) NSString *appName;
@property (retain) NEExtensionProviderContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NWPath *defaultPath;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2;
+ (bool)isRunningInProvider;
+ (void)startSystemExtensionMode;

- (void).cxx_destruct;
- (id)appName;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)context;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(bool)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2;
- (void)dealloc;
- (id)defaultPath;
- (void)displayMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initAllowUnentitled:(bool)arg1;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAppName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultPath:(id)arg1;
- (void)setdefaultPathObserver:(id)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)wake;

@end
