
@interface _UITileLayer : CALayer {
    UIBezierPath * maskPath;
    _Atomic bool  pendingDeferredOffscreenSetNeedsDisplay;
}

- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setNeedsDisplay;

@end
