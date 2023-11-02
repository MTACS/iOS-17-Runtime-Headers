
@interface _UIPopoverShapeLayerChromeView : _UIPopoverStandardChromeView {
    bool  _arrowVisible;
    long long  _backgroundStyle;
    UIVisualEffectView * _blurView;
    bool  _popoverBackgroundColorIsOpaque;
    long long  _requestedBackgroundStyle;
    _UIPopoverShapeLayerView * _shapeLayerMaskView;
    _UIPopoverShapeLayerView * _shapeLayerStrokeView;
}

+ (double)arrowBase;
+ (double)arrowHeight;
+ (double)cornerRadius;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_addArrowCurveToPath:(id)arg1 direction:(unsigned long long)arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 pinnedArrowSide:(long long)arg6;
- (struct CGPoint { double x1; double x2; })_addLineWithSlightTrailingAndLeadingCurveToPath:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 leadingEdge:(bool)arg4 isVertical:(bool)arg5;
- (void)_configureEffectView;
- (void)_createStrokeView;
- (void)_generateBottomArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 pinnedArrowSide:(long long)arg6;
- (void)_generateLeftArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 pinnedArrowSide:(long long)arg6;
- (void)_generateRightArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 pinnedArrowSide:(long long)arg6;
- (void)_generateTopArrowShapeInPath:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5 pinnedArrowSide:(long long)arg6;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pinnedArrowSide:(long long)arg2;
- (void)_loadNecessaryViews;
- (long long)_pinnedArrowSide;
- (void)_removeEffectView;
- (long long)_resolvedBackgroundStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (double)_shadowRadius;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pinnedArrowSide:(long long)arg2;
- (void)_updateBackgroundStyle;
- (void)_updateShapeLayerPath;
- (void)_updateStrokeViewColor;
- (id)backgroundEffect;
- (long long)backgroundStyle;
- (id)createShapeLayerPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (bool)usesImagesForShapeMasking;

@end
