
@interface UISelectionGrabber : UIView {
    UISelectionGrabberCustomPath * _customPath;
    bool  m_animating;
    UISelectionGrabberDot * m_dotView;
    bool  m_isDotted;
    long long  m_orientation;
    double  m_screenScale;
}

@property (nonatomic) bool animating;
@property (nonatomic, retain) UISelectionGrabberCustomPath *customPath;
@property (nonatomic, readonly) UITextRangeView *hostView;
@property (nonatomic) bool isDotted;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

+ (id)_grabberDot;
+ (Class)layerClass;

- (void).cxx_destruct;
- (double)_defaultDotWidth;
- (id)_dotView;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)animateGrabberInWithCompletion:(id /* block */)arg1;
- (void)animateGrabberOutWithCompletion:(id /* block */)arg1;
- (bool)animating;
- (bool)autoscrolled;
- (id)bezierPathFromCustomPath:(id)arg1;
- (bool)clipDot:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)customPath;
- (void)dealloc;
- (void)didMoveToSuperview;
- (bool)dotIsVisibleInDocument:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fillColor;
- (id)hostView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)inputViewIsChanging;
- (bool)isDotted;
- (bool)isPointedDown;
- (bool)isPointedLeft;
- (bool)isPointedRight;
- (bool)isPointedUp;
- (bool)isRotating;
- (bool)isScaling;
- (bool)isScrolling;
- (bool)isVertical;
- (long long)orientation;
- (void)redrawDotForScale:(double)arg1;
- (void)removeFromSuperview;
- (bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setAnimating:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCustomPath:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsDotted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (id)shapeLayer;
- (void)transitionDot:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateDot;
- (void)updatePathForBoundsChangeIfNecessary;
- (void)willMoveToWindow:(id)arg1;

@end
