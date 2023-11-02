
@interface WBSSVGImageRenderingProvider : NSObject <WBSSiteMetadataProvider, WBSWebViewMetadataFetchOperationDelegate> {
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_requestIsValid:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)setProviderDelegate:(id)arg1;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;
- (void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(struct CGSize { double x1; double x2; })arg2 withConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;

@end
