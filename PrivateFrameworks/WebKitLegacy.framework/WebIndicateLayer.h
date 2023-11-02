
@interface WebIndicateLayer : CALayer {
    WebView * _webView;
}

- (id)actionForKey:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)layoutSublayers;

@end
