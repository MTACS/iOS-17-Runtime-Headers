
@interface SFPrivateBrowsingExplanationModuleCell : UICollectionViewCell {
    SFBannerBackgroundView * _backgroundView;
    SFPrivateBrowsingExplanationModuleContentView * _explanationView;
}

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setExplanationView:(id)arg1 animated:(bool)arg2;
- (void)configureUsingBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;

@end
