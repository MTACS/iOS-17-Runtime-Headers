
@interface TSDFrameRep : NSObject {
    TSDBitmapImageProvider * mAdornment;
    TSDFrame * mFrame;
    NSArray * mImages;
    CALayer * mMaskLayer;
    NSArray * mMasks;
    bool  mShouldEnableBlendMode;
}

- (void)applyMaskForRectWithCoverage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toContext:(struct CGContext { }*)arg2;
- (id)applyToCALayer:(id)arg1 withRepLayer:(id)arg2 maskLayer:(id)arg3 viewScale:(double)arg4;
- (void)blendMaskBeforeRenderingImageInContext:(struct CGContext { }*)arg1;
- (void)dealloc;
- (id)frame;
- (void)frameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withTotalScale:(double)arg3;
- (id)initWithTSDFrame:(id)arg1;
- (void)p_addEdgeLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;
- (void)p_addUnreplicatedLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;
- (void)p_adjustRepeatingLayer:(id)arg1 withImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 start:(double)arg3 end:(double)arg4 vertical:(bool)arg5;
- (id)p_createRepeatingLayerWithImage:(struct CGImage { }*)arg1 vertical:(bool)arg2 screenScale:(double)arg3;
- (void)p_drawFrameIntoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withImages:(id)arg3 atViewScale:(double)arg4 isMask:(bool)arg5;
- (void)p_drawTiles:(id)arg1 inContext:(struct CGContext { }*)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 start:(double)arg4 end:(double)arg5 vertical:(bool)arg6;
- (struct CGImage { }*)p_newFrameForMask:(bool)arg1 size:(struct CGSize { double x1; double x2; })arg2 forCALayer:(bool)arg3 viewScale:(double)arg4;
- (struct CGImage { }*)p_newRenderedFrameForMask:(bool)arg1 size:(struct CGSize { double x1; double x2; })arg2 forCALayer:(bool)arg3 viewScale:(double)arg4;
- (void)p_setRepeatingLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 start:(double)arg5 end:(double)arg6;
- (void)p_setUnreplicatedLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)updateCALayer:(id)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withRepLayer:(id)arg3 maskLayer:(id)arg4 viewScale:(double)arg5 maskLayerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6;

@end
