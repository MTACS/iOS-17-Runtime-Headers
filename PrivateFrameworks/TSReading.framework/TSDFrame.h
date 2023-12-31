
@interface TSDFrame : TSDStroke {
    struct CGSize { 
        double width; 
        double height; 
    }  mAdornmentSize;
    double  mAssetScale;
    double  mBottomHeight;
    NSString * mFrameName;
    double  mLeftWidth;
    double  mRightWidth;
    bool  mScaledSizesValid;
    TSDFrameSpec * mSpec;
    double  mTopHeight;
}

@property (nonatomic, readonly) double assetScale;
@property (nonatomic, readonly) TSDFrameSpec *frameSpec;

+ (Class)mutableClass;

- (id)archivableFrameName;
- (double)assetScale;
- (bool)canApplyDirectlyToRepCALayer;
- (bool)canApplyToCAShapeLayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coverageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawsInOneStep;
- (id)frameName;
- (id)frameSpec;
- (bool)hasMask;
- (unsigned long long)hash;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_adornmentRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)i_bottomHeight;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (bool)i_willRenderForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrameName:(id)arg1;
- (id)initWithFrameSpec:(id)arg1;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2 archivableFrameName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFrame;
- (bool)isNullStroke;
- (double)minimumAssetScale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _TSDStrokeOutsets { double x1; double x2; double x3; double x4; })outsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_coverageRectWithAdornment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })p_minimumRenderedSize;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4;
- (bool)prefersToApplyToShapeRenderableDuringManipulation;
- (bool)shouldRender;
- (bool)shouldRenderForSizeIncludingCoverage:(struct CGSize { double x1; double x2; })arg1;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)supportsColor;
- (bool)supportsLineOptions;
- (bool)supportsPattern;

@end
