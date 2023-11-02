
@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView {
    UIView * _contentView;
    NSString * _title;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleTrailingConstraint;
    NSLayoutConstraint * _titleWithNoTopMargin;
    NSLayoutConstraint * _titleWithTopMargin;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleWithNoTopMargin;
@property (nonatomic, retain) NSLayoutConstraint *titleWithTopMargin;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updatePreferredTitleFont;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setContentView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleTrailingConstraint:(id)arg1;
- (void)setTitleWithNoTopMargin:(id)arg1;
- (void)setTitleWithTopMargin:(id)arg1;
- (id)title;
- (id)titleLabel;
- (id)titleTrailingConstraint;
- (id)titleWithNoTopMargin;
- (id)titleWithTopMargin;
- (void)traitCollectionDidChange:(id)arg1;

@end
