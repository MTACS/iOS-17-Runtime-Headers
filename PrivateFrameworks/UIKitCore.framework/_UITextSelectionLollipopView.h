
@interface _UITextSelectionLollipopView : UIView <UITextSelectionHandleView, _UITextSelectionWidgetAnimating> {
    bool  _animating;
    UIBezierPath * _customShape;
    unsigned long long  _direction;
    _UIContainerWindowPortalInteraction * _dotPortalInteraction;
    UIView * _dotView;
    bool  _hiddenForLoupeAnimation;
    bool  _portalsDotToContainerWindow;
    double  _shapeScale;
    UIView * _stemView;
}

@property (setter=_setShapeScale:, nonatomic) double _shapeScale;
@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool crossfadeOnDismissal;
@property (nonatomic, retain) UIBezierPath *customShape;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long direction;
@property (nonatomic, retain) _UIContainerWindowPortalInteraction *dotPortalInteraction;
@property (nonatomic, retain) UIView *dotView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dotViewFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hiddenForLoupeAnimation;
@property (nonatomic, readonly) struct { id x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; } originShadow;
@property (nonatomic, readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; id x4; } originShape;
@property (nonatomic, readonly) UIView *originView;
@property (nonatomic) bool portalsDotToContainerWindow;
@property (nonatomic, retain) UIView *stemView;
@property (readonly) Class superclass;
@property (getter=isVertical, nonatomic, readonly) bool vertical;

- (void).cxx_destruct;
- (unsigned long long)_configuredStemPoint;
- (struct CGPoint { double x1; double x2; })_dotCenterForDotBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stemPoint:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_dotSize;
- (void)_layoutDotView;
- (void)_layoutStemView;
- (void)_setShapeScale:(double)arg1;
- (double)_shapeScale;
- (void)_updateFillColorsForTintColor:(id)arg1;
- (void)_usePlainViewForStemView;
- (void)_useShapeViewForStemView;
- (bool)crossfadeOnDismissal;
- (id)customShape;
- (unsigned long long)direction;
- (id)dotPortalInteraction;
- (id)dotView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dotViewFrame;
- (bool)hiddenForLoupeAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (bool)isVertical;
- (void)layoutSubviews;
- (struct { id x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })originShadow;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; id x4; })originShape;
- (id)originView;
- (bool)portalsDotToContainerWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredFrameForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAnimating:(bool)arg1;
- (void)setCustomShape:(id)arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setDotPortalInteraction:(id)arg1;
- (void)setDotView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHiddenForLoupeAnimation:(bool)arg1;
- (void)setPortalsDotToContainerWindow:(bool)arg1;
- (void)setStemView:(id)arg1;
- (id)stemView;
- (void)tintColorDidChange;

@end
