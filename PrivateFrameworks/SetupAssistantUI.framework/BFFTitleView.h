
@interface BFFTitleView : UIScrollView {
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
