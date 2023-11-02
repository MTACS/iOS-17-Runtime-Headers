
@interface HXUIPickerLabelView : UIView {
    HXUILabelWithBackgroundView * _detailLabel;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) UIColor *detailTextColor;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)detailText;
- (id)detailTextColor;
- (void)getLabelFramesForSize:(struct CGSize { double x1; double x2; })arg1 titleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 detailFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDetailText:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
