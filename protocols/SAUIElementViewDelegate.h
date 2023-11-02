
@protocol SAUIElementViewDelegate <SAUILayoutHosting>

@required

- (void)elementView:(SAUIElementView *)arg1 didConfigureLeadingTransformView:(UIView *)arg2;
- (void)elementView:(SAUIElementView *)arg1 didConfigureMinimalTransformView:(UIView *)arg2;
- (void)elementView:(SAUIElementView *)arg1 didConfigureTrailingTransformView:(UIView *)arg2;
- (void)elementView:(SAUIElementView *)arg1 didLayoutResizedLeadingTransformView:(UIView *)arg2;
- (void)elementView:(SAUIElementView *)arg1 didLayoutResizedMinimalTransformView:(UIView *)arg2;
- (void)elementView:(SAUIElementView *)arg1 didLayoutResizedTrailingTransformView:(UIView *)arg2;
- (bool)elementViewShouldCenterProvidedContent:(SAUIElementView *)arg1;
- (bool)isMinimalViewIsolatedForElementView:(SAUIElementView *)arg1;
- (long long)layoutModeForElementView:(SAUIElementView *)arg1;
- (struct CGSize { double x1; double x2; })maximumSizeOfLeadingViewForElementView:(SAUIElementView *)arg1;
- (struct CGSize { double x1; double x2; })maximumSizeOfMinimalViewForElementView:(SAUIElementView *)arg1;
- (struct CGSize { double x1; double x2; })maximumSizeOfTrailingViewForElementView:(SAUIElementView *)arg1;

@end
