
@protocol CPMapTemplateProviding <CPBaseTemplateProviding>

@required

- (void)dismissNavigationAlertAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)hostPanInterfaceVisible:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)hostSetMapButton:(NSUUID *)arg1 imageSet:(CPImageSet *)arg2;
- (void)hostSetMapButtons:(NSArray *)arg1;
- (void)hostSetPanInterfaceVisible:(bool)arg1 animated:(bool)arg2;
- (void)hostUpdateTravelEstimates:(CPTravelEstimates *)arg1 forTripIdentifier:(NSUUID *)arg2;
- (void)setHostAutoHidesNavigationBar:(bool)arg1;
- (void)setHostGuidanceBackgroundColor:(UIColor *)arg1;
- (void)setHostHidesButtonsWithNavigationBar:(bool)arg1;
- (void)setHostTripEstimateStyle:(unsigned long long)arg1;
- (void)setHostTripPreviews:(NSArray *)arg1 textConfiguration:(CPTripPreviewTextConfiguration *)arg2 previewOnlyRouteChoices:(bool)arg3 selectedIndex:(unsigned long long)arg4;
- (void)setMapButton:(NSUUID *)arg1 focusedImage:(UIImage *)arg2;
- (void)setMapButton:(NSUUID *)arg1 hidden:(bool)arg2;
- (void)showNavigationAlert:(CPNavigationAlert *)arg1 animated:(bool)arg2;
- (void)updateNavigationAlert:(CPNavigationAlert *)arg1;

@end
