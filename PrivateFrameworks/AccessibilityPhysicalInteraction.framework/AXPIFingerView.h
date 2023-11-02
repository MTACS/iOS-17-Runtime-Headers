
@interface AXPIFingerView : UIView <CAAnimationDelegate> {
    <AXPIFingerAppearanceDelegate> * _appearanceDelegate;
    AXPIFingerLayer * _cursorLayer;
    double  _force;
    CAShapeLayer * _innerStrokeLayer;
    id /* block */  _lastProgressCompletionBlock;
    CAShapeLayer * _outerStrokeLayer;
    CAShapeLayer * _outerStrokeTrackLayer;
    bool  _pressed;
    CAShapeLayer * _progressLayer;
    unsigned long long  _shape;
}

@property (nonatomic) <AXPIFingerAppearanceDelegate> *appearanceDelegate;
@property (nonatomic, retain) AXPIFingerLayer *cursorLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double force;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAShapeLayer *innerStrokeLayer;
@property (nonatomic, copy) id /* block */ lastProgressCompletionBlock;
@property (nonatomic, retain) CAShapeLayer *outerStrokeLayer;
@property (nonatomic, retain) CAShapeLayer *outerStrokeTrackLayer;
@property (getter=isPressed, nonatomic) bool pressed;
@property (nonatomic, retain) CAShapeLayer *progressLayer;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) unsigned long long shape;
@property (readonly) Class superclass;

+ (id)layerClass;

- (void).cxx_destruct;
- (id)_createProgressLayerWithDuration:(double)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_iconScaleForForce:(double)arg1;
- (void)_setPathForCurrentShape;
- (bool)accessibilityIgnoresInvertColors;
- (void)animateCircularProgressWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)animateToTapWithDuration:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)appearanceDelegate;
- (id)backdropLayer;
- (void)cancelExisingCircularProgressAnimation;
- (id)cursorLayer;
- (void)dealloc;
- (id)filterLayer;
- (double)force;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 appearanceDelegate:(id)arg2;
- (id)innerStrokeLayer;
- (bool)isPressed;
- (bool)isSelected;
- (bool)isUserInteractionEnabled;
- (id /* block */)lastProgressCompletionBlock;
- (id)outerStrokeLayer;
- (id)outerStrokeTrackLayer;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)progressLayer;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setCursorLayer:(id)arg1;
- (void)setForce:(double)arg1;
- (void)setInnerStrokeLayer:(id)arg1;
- (void)setLastProgressCompletionBlock:(id /* block */)arg1;
- (void)setOuterStrokeLayer:(id)arg1;
- (void)setOuterStrokeTrackLayer:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;
- (void)setProgressLayer:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShape:(unsigned long long)arg1;
- (unsigned long long)shape;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
