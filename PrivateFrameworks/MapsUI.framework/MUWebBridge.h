
@interface MUWebBridge : NSObject <WKScriptMessageHandler> {
    NSMutableDictionary * _callHandlers;
    long long  _connectionState;
    id /* block */  _defaultCallbackHandler;
    <MUWebBridgeDelegate> * _delegate;
    long long  _nextCallNumber;
    NSMutableDictionary * _pendingCallbackHandlers;
    MUWebViewFactoryItem * _webViewFactoryItem;
}

@property (nonatomic, readonly, copy) NSDictionary *callHandlers;
@property (nonatomic, readonly) long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUWebBridgeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MUWebViewFactoryItem *webViewFactoryItem;

+ (id)URLByAddingConfiguration:(id)arg1 toURL:(id)arg2 additionalQueryItems:(id)arg3;
+ (id)_operatingSystemName;
+ (id)_operatingSystemVersion;

- (void).cxx_destruct;
- (void)_consumeCallbackHandlerWithNumber:(id)arg1 result:(id)arg2 errorMessage:(id)arg3;
- (void)_dispatchCall:(id)arg1;
- (void)_dispatchCallback:(id)arg1;
- (void)_initializeConnection;
- (void)_postMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_receiveMessage:(id)arg1;
- (void)addCallableMethod:(id)arg1 handler:(id /* block */)arg2;
- (id)callHandlers;
- (void)callMethod:(id)arg1 arguments:(id)arg2 callbackHandler:(id /* block */)arg3;
- (void)closeConnection;
- (long long)connectionState;
- (id)delegate;
- (id)initWithWebViewFactoryItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webViewFactoryItem;

@end
