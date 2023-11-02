
@interface CPSBannerContainerView : UIView <UIGestureRecognizerDelegate> {
    bool  _bannerCrossFading;
    bool  _bannerHasAccessibilityFocus;
    bool  _bannerHidden;
    UIView * _bannerView;
    UIPanGestureRecognizer * _dismissGesture;
    NSLayoutConstraint * _verticalPositionConstraintForDismissGesture;
    NSLayoutConstraint * _verticalPositionConstraintWhenHidden;
    NSLayoutConstraint * _verticalPositionConstraintWhenVisible;
    double  _verticalPositionOffsetForDismissGesture;
    double  _widthDuringLastBannerAnimation;
}

@property (nonatomic) bool bannerHasAccessibilityFocus;
@property (getter=isBannerHidden, nonatomic) bool bannerHidden;
@property (nonatomic, retain) UIView *bannerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTrackingBannerDismissGesture, nonatomic, readonly) bool trackingBannerDismissGesture;

- (void).cxx_destruct;
- (void)_accessibilityElementFocusDidChange:(id)arg1;
- (void)_commonInit;
- (void)_dismissGestureRecognized:(id)arg1;
- (void)_installBannerViewIfNeeded;
- (void)_removeBannerAnimationsIfNeeded;
- (void)_updateBannerContentSizeCategory;
- (bool)bannerHasAccessibilityFocus;
- (id)bannerView;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithBannerView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBannerHidden;
- (bool)isTrackingBannerDismissGesture;
- (void)setBannerHasAccessibilityFocus:(bool)arg1;
- (void)setBannerHidden:(bool)arg1;
- (void)setBannerHidden:(bool)arg1 animated:(bool)arg2 animationCompletion:(id /* block */)arg3;
- (void)setBannerView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

@end
