
@interface IAMWebMessageController : NSObject <IAMWebProcessDelegate, WKNavigationDelegate> {
    NSArray * _contentPages;
    <IAMWebMessageControllerDelegate> * _delegate;
    bool  _didMainNavigationFinish;
    bool  _hasSentContentPages;
    bool  _isGlobalJSOAvailable;
    id /* block */  _loadCompletion;
    ICInAppMessageEntry * _messageEntry;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    <IAMWebProcessProxy> * _webProcessProxy;
    IAMWebView * _webView;
}

@property (nonatomic, retain) NSArray *contentPages;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IAMWebMessageControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ loadCompletion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IAMWebView *webView;

- (void).cxx_destruct;
- (void)_callLoadCompletionWithError:(id)arg1;
- (void)_checkReadyForLoadCompletion;
- (void)_createJSOContentPages:(id)arg1 fromMessageEntry:(id)arg2 withBlock:(id /* block */)arg3;
- (id)contentPages;
- (id)delegate;
- (id)init;
- (id /* block */)loadCompletion;
- (void)loadMessageFromMessageEntry:(id)arg1 withWebArchiveURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setContentPages:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadCompletion:(id /* block */)arg1;
- (void)unregisterExportedObjectInterface;
- (void)webProcessJSODidCallClose;
- (void)webProcessJSODidCallOpen:(id)arg1 options:(id)arg2;
- (void)webProcessJSODidCallPerformAction:(id)arg1 options:(id)arg2;
- (void)webProcessJSODidReportEvent:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (id)webView;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
