
@protocol CUIVectorGlyhLayerDelegate

@required

- (void)_legacy_drawHierarchicalLayerNamed:(void *)arg1 inContext:(void *)arg2 scaleFactor:(void *)arg3 targetSize:(void *)arg4 colorResolver:(void *)arg5; // needs 5 arg types, found 15: NSString *, struct CGContext { }*, double, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, struct CGColor { }*, id /* block */, NSString *, struct CGColor { }*, unsigned long long, unsigned long long, long long, CUIVectorGlyphLayer *, void*
- (void)_legacy_drawMonochromeLayerNamed:(NSString *)arg1 inContext:(struct CGContext { }*)arg2 scaleFactor:(double)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 onFillColor:(struct CGColor { }*)arg5 offFillColor:(struct CGColor { }*)arg6;
- (void)_legacy_drawMulticolorLayerNamed:(void *)arg1 inContext:(void *)arg2 scaleFactor:(void *)arg3 targetSize:(void *)arg4 colorResolver:(void *)arg5; // needs 5 arg types, found 15: NSString *, struct CGContext { }*, double, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, struct CGColor { }*, id /* block */, NSString *, struct CGColor { }*, unsigned long long, unsigned long long, long long, CUIVectorGlyphLayer *, void*
- (double)_requestedPointSizeRatio;
- (struct CGPath { }*)pathForLayerNamed:(NSString *)arg1;
- (struct CGSize { double x1; double x2; })referenceCanvasSize;
- (double)scale;
- (struct CGSVGAttributeMap { }*)styleForLayerName:(NSString *)arg1;
- (float)templateVersion;

@end
