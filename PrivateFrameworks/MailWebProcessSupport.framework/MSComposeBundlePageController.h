
@interface MSComposeBundlePageController : NSObject <MSBundlePageController, MSComposeBodyFieldController, WKWebProcessPlugInLoadDelegate> {
    bool  _addLinkPreviewsEnabled;
    NSMutableArray * _blocksToPerformOnPage;
    WKWebProcessPlugInBrowserContextController * _controller;
    bool  _isQuickReplyEnabled;
    JSValue * _jsBodyField;
    JSContext * _jsContext;
    <MSRichLinkGeneration> * _linkGeneratorProxy;
    unsigned long long  _performOnPageSuspendCount;
    <WKWebProcessPlugIn> * _plugIn;
    EFProcessTransaction * _webContentProcessTransaction;
}

@property (nonatomic, readonly) WKWebProcessPlugInBrowserContextController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) JSValue *jsBodyField;
@property (nonatomic, readonly) JSContext *jsContext;
@property (nonatomic, readonly) <MSComposeBodyFieldObserver> *observerProxy;
@property (nonatomic, readonly) <WKWebProcessPlugIn> *plugIn;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_linkGeneratorProxy;
- (void)changeQuoteLevelBy:(long long)arg1 withUndoActionName:(id)arg2;
- (id)controller;
- (id)createRichLink:(id)arg1;
- (void)enableQuickReply:(bool)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)initializeBodyField:(id)arg1;
- (void)initializeGlobalObject;
- (void)insertRichLinkWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidate;
- (id)jsBodyField;
- (id)jsContext;
- (void)makeRichLinkFromSelection;
- (id)observerProxy;
- (void)performBodyFieldMethodOnPage:(id)arg1 withArguments:(id)arg2;
- (void)performOnPage:(id /* block */)arg1;
- (id)plugIn;
- (void)removeRichLinkFromSelection;
- (void)resumePerformOnPage;
- (void)stripCustomBodyIdentifiers;
- (void)suspendPerformOnPage;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (id)willSendRequest:(id)arg1;

@end
