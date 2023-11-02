
@interface EDMailDropMetadataGenerator : NSObject <WKNavigationDelegate> {
    EFPromise * _activePromise;
    NSMutableArray * _scriptHandlers;
    WKWebView * _webView;
}

@property (nonatomic, retain) EFPromise *activePromise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *scriptHandlers;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)_addScriptHandlerForKey:(id)arg1 handler:(id /* block */)arg2;
- (void)_findMailDropNodesInFileURL:(id)arg1 promise:(id)arg2;
- (bool)_shouldSearchForMailDropNodesInFileURL:(id)arg1;
- (id)activePromise;
- (void)dealloc;
- (void)generateMailDropMetadataForContentURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMailDropAttachmentViewForContentURL:(id)arg1 HTMLByContentID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)scriptHandlers;
- (void)setActivePromise:(id)arg1;
- (void)setScriptHandlers:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)tearDownWebView;
- (id)webView;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (id)withTimeout:(double)arg1 do:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
