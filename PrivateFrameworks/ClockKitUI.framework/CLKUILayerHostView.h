
@interface CLKUILayerHostView : UIView {
    UIView * _superviewDelegate;
}

@property (nonatomic) UIView *superviewDelegate;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setSuperviewDelegate:(id)arg1;
- (id)superview;
- (id)superviewDelegate;

@end
