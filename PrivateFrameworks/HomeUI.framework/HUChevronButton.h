
@interface HUChevronButton : UIControl {
    UIImageView * _chevronImageView;
    UIStackView * _containerView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *chevronImageView;
@property (nonatomic, retain) UIStackView *containerView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)chevronImageView;
- (id)containerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChevronImageView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
