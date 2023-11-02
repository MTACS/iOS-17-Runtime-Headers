
@interface _CPUINowPlayingBackButton : UIButton {
    CPUIFocusRingView * _focusRing;
}

@property (nonatomic, retain) CPUIFocusRingView *focusRing;

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusRing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFocusRing:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;

@end
