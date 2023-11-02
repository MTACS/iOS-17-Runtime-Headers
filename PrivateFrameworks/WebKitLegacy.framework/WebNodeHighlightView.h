
@interface WebNodeHighlightView : WAKView {
    NSMutableArray * _layers;
    WebNodeHighlight * _webNodeHighlight;
}

- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;
- (void)_layoutForNodeHighlight:(void*)arg1 parent:(id)arg2;
- (void)_layoutForRectsHighlight:(void*)arg1 parent:(id)arg2;
- (void)_removeAllLayers;
- (void)dealloc;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)arg1;
- (bool)isFlipped;
- (void)layoutSublayers:(id)arg1;
- (id)webNodeHighlight;

@end
