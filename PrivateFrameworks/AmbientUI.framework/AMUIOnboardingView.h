
@interface AMUIOnboardingView : UIView <UIScrollViewDelegate> {
    UIScrollView * _containerScrollView;
    UILabel * _contentLabel;
    UIButton * _continueButton;
    MTMaterialView * _continueButtonOcclusionMaterialView;
    <AMUIOnboardingViewDelegate> * _delegate;
    BSUICAPackageView * _packageView;
    unsigned long long  _packageViewStateIndex;
    bool  _showContinueButtonOcclusionMaterialView;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIOnboardingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureContainerScrollViewIfNecessary;
- (void)_configureContinueButtonIfNecessary;
- (void)_configureContinueButtonOcclusionMaterialViewIfNecessary;
- (void)_configurePackageViewIfNecessary;
- (id)_containerScrollView;
- (double)_contentAllowedWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutContainerScrollViewIfNecessary;
- (void)_layoutContentLabelIfNecessary;
- (void)_layoutContinueButtonIfNecessary;
- (void)_layoutContinueButtonOcclusionMaterialViewIfNecessary;
- (void)_layoutPackageViewIfNecessary;
- (void)_layoutTitleLabelIfNecessary;
- (id)_onboardingTitle;
- (id)_onboardingViewPackageName;
- (void)_performNextAnimationForPackageViewAnimated:(bool)arg1;
- (void)_setContent:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_toggleContinueButtonOcclusionMaterialViewVisibilityIsVisible:(bool)arg1 animated:(bool)arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
