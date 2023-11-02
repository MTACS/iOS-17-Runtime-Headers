
@interface UIPDFPageContentLayer : CALayer <CALayerDelegate, UIPDFSelectionLayer> {
    CALayer * _selectionLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;

@end
