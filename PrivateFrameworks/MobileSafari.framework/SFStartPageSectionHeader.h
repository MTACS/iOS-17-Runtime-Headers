
@interface SFStartPageSectionHeader : UICollectionReusableView {
    NSArray * _actions;
    WBSStartPageBanner * _banner;
    SFBannerCell * _bannerView;
    NSLayoutConstraint * _bannerViewBottomConstraint;
    UIStackView * _buttonStackView;
    UIVisualEffectView * _separatorView;
    NSLayoutConstraint * _stackCenterXConstraint;
    NSLayoutConstraint * _stackLeadingConstraint;
    NSLayoutConstraint * _titleBottomConstraint;
    SFStartPageSectionHeaderTitleView * _titleView;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, retain) WBSStartPageBanner *banner;
@property (nonatomic) double bottomGap;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_createSeparatorViewIfNeeded;
- (id)_disclosureButtonForLayout;
- (id)actions;
- (id)banner;
- (double)bottomGap;
- (void)configureUsingSection:(id)arg1 visualStyleProvider:(id)arg2 resolvingActionsUsingBlock:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActions:(id)arg1 expandsModally:(bool)arg2 withSize:(long long)arg3;
- (void)setBanner:(id)arg1;
- (void)setBottomGap:(double)arg1;
- (void)updateViewsDependingOnCustomTraits;

@end
