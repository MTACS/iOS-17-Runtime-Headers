
@interface _UITextCursorTrailingGlowView : UIView <CAAnimationDelegate> {
    CABasicAnimation * _animation;
    double  _animationStartTime;
    UIDictationGlowEffect * _dictationGlowEffect;
    bool  _needsToUpdateAnimation;
    _UIShapeView * _shapeView;
    bool  _trailingAnimationEnabled;
    id /* block */  _transitionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTrailingAnimationEnabled, nonatomic) bool trailingAnimationEnabled;
@property (nonatomic, copy) id /* block */ transitionBlock;

- (void).cxx_destruct;
- (void)_animate;
- (void)_updateShapeAndAnimate;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)cursorDidMoveToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPreviousFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isNewLine:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })estimatedCurrentFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTrailingAnimationEnabled;
- (struct CGPath { }*)pathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setTrailingAnimationEnabled:(bool)arg1;
- (void)setTransitionBlock:(id /* block */)arg1;
- (id /* block */)transitionBlock;

@end
