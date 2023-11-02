
@interface AMSUICommonControl : UIControl {
    bool  _trackingMouse;
}

@property (getter=isTrackingMouse, nonatomic) bool trackingMouse;

- (void)_setup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTrackingMouse;
- (void)setTrackingMouse:(bool)arg1;

@end
