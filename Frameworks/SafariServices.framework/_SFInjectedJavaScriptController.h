
@interface _SFInjectedJavaScriptController : NSObject {
    <SFInjectedJavaScriptWebProcessController> * _activityProxy;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (id)_webProcessActivityProxy;
- (id)initWithWebView:(id)arg1;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(id /* block */)arg5;

@end
