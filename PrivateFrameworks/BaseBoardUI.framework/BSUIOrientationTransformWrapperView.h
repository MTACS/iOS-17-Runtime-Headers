
@interface BSUIOrientationTransformWrapperView : UIView {
    long long  _containerOrientation;
    long long  _contentOrientation;
    NSMutableArray * _hitTestViews;
    _BSUIOrientationTransformedContentView * _transformedView;
}

@property (nonatomic) long long containerOrientation;
@property (nonatomic) long long contentOrientation;
@property (nonatomic, readonly) NSArray *contentViews;
@property (getter=isCounterTransformView, nonatomic) bool counterTransformView;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_referenceContainerSize;
- (void)_updateGeometry;
- (void)addContentView:(id)arg1;
- (void)addGestureRecognizerToTransformedView:(id)arg1;
- (void)addHitTestView:(id)arg1;
- (void)bringContentSubviewToFront:(id)arg1;
- (long long)containerOrientation;
- (long long)contentOrientation;
- (id)contentViews;
- (struct CGPoint { double x1; double x2; })convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)description;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCounterTransformView;
- (void)layoutSubviews;
- (void)removeGestureRecognizerFromTransformedView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setContentOrientation:(long long)arg1;
- (void)setCounterTransformView:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
