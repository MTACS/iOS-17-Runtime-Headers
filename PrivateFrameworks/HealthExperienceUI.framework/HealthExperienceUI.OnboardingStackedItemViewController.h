
@interface HealthExperienceUI.OnboardingStackedItemViewController : HealthExperienceUI.OnboardingViewControllerWithNextButton {
    void backgroundViews;
    void contentViewBottomConstraint;
    void horizontalConstraints;
    void isAnimating;
    void nextIndexToAnimate;
    void shouldNextButtonDisplayContinueOnLastItem;
    void shouldUseDynamicHorizontalMargins;
    void stackedItems;
    void titleToItemsTopConstraint;
}

- (void).cxx_destruct;
- (void)nextButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)widthDesignationDidChangeWithTraitEnvironment:(id)arg1 previousTraitCollection:(id)arg2;

@end
