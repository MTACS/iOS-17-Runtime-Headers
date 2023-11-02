
@interface SGDOMParser : NSObject <WKNavigationDelegate> {
    NSString * _html;
    NSObject<OS_dispatch_semaphore> * _loadedSem;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_parseDocument:(id)arg1;
- (id)parseHTML:(id)arg1;
- (void)runJavascriptOnWebView:(id)arg1 withCallback:(id /* block */)arg2;
- (id)webView;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
