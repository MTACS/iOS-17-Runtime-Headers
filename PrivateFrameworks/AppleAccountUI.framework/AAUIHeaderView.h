
@interface AAUIHeaderView : AAUIBuddyView {
    UIImageView * _headerImageView;
    UILabel * _messageLabel;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIImageView *headerImageView;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateLabelFonts;
- (void)_updateStackViewSpacing;
- (id)headerImageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageLabel;
- (void)setHeaderImage:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
