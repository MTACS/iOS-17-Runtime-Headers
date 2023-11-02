
@interface _SBHLibraryZoomAnimatorTouchForwardingView : UIView {
    UIView * _touchForwardingTargetView;
}

@property (nonatomic) UIView *touchForwardingTargetView;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setTouchForwardingTargetView:(id)arg1;
- (id)touchForwardingTargetView;

@end
