
@interface EMRemoteContentURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    bool  _allowProxying;
    <EFScheduler> * _scheduler;
    NSString * _schemePrefix;
    EMRemoteContentURLSession * _session;
}

@property (nonatomic, readonly) bool allowProxying;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *remoteContentHTTPSScheme;
@property (nonatomic, readonly) NSString *remoteContentHTTPScheme;
@property (nonatomic, readonly) NSString *schemePrefix;
@property (readonly) Class superclass;

+ (id)dataTaskForRequest:(id)arg1 withSchemePrefix:(id)arg2 session:(id)arg3 scheduler:(id)arg4 allowProxying:(bool)arg5 cancelationToken:(id*)arg6 completionHandler:(id /* block */)arg7;

- (void).cxx_destruct;
- (bool)allowProxying;
- (id)initWithSession:(id)arg1 schemePrefix:(id)arg2 allowProxying:(bool)arg3;
- (id)remoteContentHTTPSScheme;
- (id)remoteContentHTTPScheme;
- (id)schemePrefix;
- (void)setOnWebViewConfiguration:(id)arg1;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;

@end
