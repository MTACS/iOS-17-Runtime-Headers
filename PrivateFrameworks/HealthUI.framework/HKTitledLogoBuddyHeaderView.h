
@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {
    UIImageView * _logoImageView;
    NSLayoutConstraint * _titleLabelFirstBaselineAnchor;
}

@property (nonatomic, retain) UIImage *logoImage;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (double)bottomPadding;
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;
- (id)logoImage;
- (id)logoImageView;
- (void)setLogoImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
