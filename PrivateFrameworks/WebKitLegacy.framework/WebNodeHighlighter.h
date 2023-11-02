
@interface WebNodeHighlighter : NSObject {
    WebNodeHighlight * _currentHighlight;
    WebView * _inspectedWebView;
}

- (void)dealloc;
- (void)didAttachWebNodeHighlight:(id)arg1;
- (void)hideHighlight;
- (void)highlight;
- (id)initWithInspectedWebView:(id)arg1;
- (void)willDetachWebNodeHighlight:(id)arg1;

@end
