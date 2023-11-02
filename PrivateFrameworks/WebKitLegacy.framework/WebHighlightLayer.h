
@interface WebHighlightLayer : CALayer {
    WebNodeHighlightView * _view;
    WebView * _webView;
}

- (id)actionForKey:(id)arg1;
- (id)initWithHighlightView:(id)arg1 webView:(id)arg2;
- (void)layoutSublayers;

@end
