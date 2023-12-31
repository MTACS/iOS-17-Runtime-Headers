
@interface _SFSyntheticClickContext : NSObject {
    WKNavigationAction * _navigationAction;
    WKWebView * _webView;
}

@property (nonatomic, readonly) WKNavigationAction *navigationAction;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)initWithWebView:(id)arg1 navigationAction:(id)arg2;
- (id)navigationAction;
- (id)webView;

@end
