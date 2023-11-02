
@interface ASCEditorsChoiceView : UIView {
    UIColor * _color;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)editorsChoiceFont;
+ (id)editorsChoiceText;
+ (double)laurelPadding;
+ (id)leftLaurel;
+ (id)rightLaurel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)color;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
