
@interface NewsUI2.FollowingNotificationsDisabledView : UIView {
    void button;
    void onButtonTap;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
