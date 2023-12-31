
@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {
    long long  _interfaceOrientation;
    bool  _unknownOrientation;
}

- (void)_didRemoveSubview:(id)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attached:(bool)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 debugName:(id)arg2 windowScene:(id)arg3;
- (void)commonInit;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)updateForOrientation:(long long)arg1;

@end
