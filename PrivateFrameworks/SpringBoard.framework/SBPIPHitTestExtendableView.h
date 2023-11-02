
@interface SBPIPHitTestExtendableView : UIView {
    UIView * _hitTestExtenderView;
}

@property (nonatomic) UIView *hitTestExtenderView;

- (void).cxx_destruct;
- (id)hitTestExtenderView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitTestExtenderView:(id)arg1;

@end
