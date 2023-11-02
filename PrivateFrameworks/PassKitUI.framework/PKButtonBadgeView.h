
@interface PKButtonBadgeView : UIView {
    NSString * _badgeValue;
    UILabel * _valueLabel;
}

@property (nonatomic, copy) NSString *badgeValue;

- (void).cxx_destruct;
- (id)badgeValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBadgeValue:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
