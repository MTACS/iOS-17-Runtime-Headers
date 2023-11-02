
@interface PBFFocusPosterSelectionHeaderView : UICollectionReusableView {
    NSAttributedString * _attributedSubtitle;
    UIView * _separatorView;
    NSLayoutConstraint * _separatorViewHeightConstraint;
    UIStackView * _stackView;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSAttributedString *attributedSubtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_createSeparatorView;
- (void)_createStackView;
- (void)_createSubtitleLabel;
- (void)_createTitleLabel;
- (void)_updateSeparatorHeightConstraint;
- (id)attributedSubtitle;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
