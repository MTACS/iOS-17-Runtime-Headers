
@interface MUWebViewFactoryItem : NSObject {
    MUWebBridgeConfiguration * _bridgeConfiguration;
    MUWebViewMessageHandlerProxy * _messageHandlerProxy;
    WKWebView * _webView;
}

@property (nonatomic, readonly, copy) MUWebBridgeConfiguration *bridgeConfiguration;
@property (nonatomic, readonly) MUWebViewMessageHandlerProxy *messageHandlerProxy;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)bridgeConfiguration;
- (id)initWithBridgeConfiguration:(id)arg1 webView:(id)arg2 messageHandlerProxy:(id)arg3;
- (id)messageHandlerProxy;
- (id)webView;

@end
