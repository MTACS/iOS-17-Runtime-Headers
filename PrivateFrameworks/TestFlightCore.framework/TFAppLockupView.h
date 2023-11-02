
@interface TFAppLockupView : UIView <TFImageAssigning> {
    UIImageView * _iconView;
    UILabel * _primarySubtitleLabel;
    UILabel * _secondarySubtitleLabel;
    TFAppLockupViewSpecification * _specification;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } displayedIconSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *iconView;
@property (nonatomic, readonly) UILabel *primarySubtitleLabel;
@property (nonatomic, readonly) UILabel *secondarySubtitleLabel;
@property (nonatomic, retain) TFAppLockupViewSpecification *specification;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_layoutLabelsInLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_styleSubviews;
- (struct CGSize { double x1; double x2; })displayedIconSize;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primarySubtitleLabel;
- (id)secondarySubtitleLabel;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setSpecification:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)specification;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
