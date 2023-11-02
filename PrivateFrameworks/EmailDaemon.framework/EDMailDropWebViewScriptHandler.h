
@interface EDMailDropWebViewScriptHandler : NSObject <WKScriptMessageHandler> {
    id /* block */  _handler;
    NSString * _name;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) WKWebView *webView;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)name;
- (void)setHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView;

@end
