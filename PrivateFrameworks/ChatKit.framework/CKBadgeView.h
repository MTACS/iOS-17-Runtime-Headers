
@interface CKBadgeView : UIView {
    UILabel * _countLabel;
    unsigned long long  _value;
}

@property (nonatomic, readonly) UILabel *countLabel;
@property (nonatomic) unsigned long long value;

- (void).cxx_destruct;
- (id)countLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setValue:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)value;

@end
