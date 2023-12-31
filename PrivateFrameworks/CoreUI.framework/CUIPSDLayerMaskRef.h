
@interface CUIPSDLayerMaskRef : NSObject {
    bool  _isVectorMask;
    CUIPSDLayerRef * _layerRef;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGImage { }*)createCGImageMask;
- (void)dealloc;
- (id)initLayerMaskWithLayerRef:(id)arg1;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (bool)isEnabled;
- (bool)isInvertedWhenBlending;
- (bool)isLinked;
- (id)layerRef;
- (struct CGPath { }*)newBezierPath;
- (struct CGPath { }*)newBezierPathAtScale:(double)arg1;

@end
