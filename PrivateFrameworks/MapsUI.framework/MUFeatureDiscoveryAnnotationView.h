
@interface MUFeatureDiscoveryAnnotationView : UIView {
    UIView * _backgroundView;
    double  _cornerRadius;
    bool  _floatingIndicator;
    bool  _showBubbleIndicator;
    UIView * _sourceView;
    _TipMaskView * _tipMaskView;
    NSLayoutConstraint * _topLayoutConstraint;
}

@property (nonatomic, readonly) double arrowOffset;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) bool floatingIndicator;
@property (nonatomic) bool showBubbleIndicator;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, retain) _TipMaskView *tipMaskView;

- (void).cxx_destruct;
- (void)_addArrowCurveToPath:(id)arg1 direction:(unsigned long long)arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 endPoint:(struct CGPoint { double x1; double x2; })arg4 peakPoint:(struct CGPoint { double x1; double x2; })arg5;
- (void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 leadingEdge:(bool)arg4 isVertical:(bool)arg5;
- (void)_setupSubviews;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateShapeLayerPath;
- (void)_updateUI;
- (double)arrowBase;
- (double)arrowHeight;
- (double)arrowOffset;
- (id)backgroundView;
- (double)cornerRadius;
- (bool)floatingIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setFloatingIndicator:(bool)arg1;
- (void)setShowBubbleIndicator:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (void)setTipMaskView:(id)arg1;
- (bool)showBubbleIndicator;
- (id)sourceView;
- (id)tipMaskView;
- (void)traitCollectionDidChange:(id)arg1;

@end
