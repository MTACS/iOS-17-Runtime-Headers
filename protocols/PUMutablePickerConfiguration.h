
@protocol PUMutablePickerConfiguration

@required

- (bool)didDismissOnboardingHeaderView;
- (bool)didDismissOnboardingOverlayView;
- (unsigned long long)edgesWithoutContentMargins;
- (double)fractionExpanded;
- (long long)selectionLimit;
- (void)setDidDismissOnboardingHeaderView:(bool)arg1;
- (void)setDidDismissOnboardingOverlayView:(bool)arg1;
- (void)setEdgesWithoutContentMargins:(unsigned long long)arg1;
- (void)setFractionExpanded:(double)arg1;
- (void)setSelectionLimit:(long long)arg1;

@end
