
@interface TLKTapContainerButton : UIButton {
    UIView * _containerView;
}

@property (nonatomic) UIView *containerView;

- (void).cxx_destruct;
- (id)containerView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setContainerView:(id)arg1;

@end
