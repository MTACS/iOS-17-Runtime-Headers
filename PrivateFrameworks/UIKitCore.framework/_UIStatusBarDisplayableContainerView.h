
@interface _UIStatusBarDisplayableContainerView : UIView <_UIStatusBarDisplayable> {
    UIView * _subviewForBaselineAlignment;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic) UIView *subviewForBaselineAlignment;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (void)setSubviewForBaselineAlignment:(id)arg1;
- (id)subviewForBaselineAlignment;
- (id)viewForLastBaselineLayout;

@end
