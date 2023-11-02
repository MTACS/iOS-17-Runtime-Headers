
@interface HACCCapsuleTitleView : UIView {
    UIVisualEffectView * _titleContainer;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIVisualEffectView *titleContainer;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setTitleContainer:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleContainer;
- (id)titleLabel;

@end
