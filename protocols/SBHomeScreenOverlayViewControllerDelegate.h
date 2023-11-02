
@protocol SBHomeScreenOverlayViewControllerDelegate

@required

- (UIView *)backgroundViewForEditingDoneButtonForHomeScreenOverlayViewController:(SBHomeScreenOverlayViewController *)arg1;
- (void)homeScreenOverlayViewController:(SBHomeScreenOverlayViewController *)arg1 setSuppressesEditingStateForListView:(bool)arg2;
- (void)homeScreenOverlayViewWantsToEndEditing:(SBHomeScreenOverlayViewController *)arg1;
- (void)homeScreenOverlayViewWantsWidgetEditingViewControllerPresented:(SBHomeScreenOverlayViewController *)arg1;
- (bool)isEditingForHomeScreenOverlayViewController:(SBHomeScreenOverlayViewController *)arg1;
- (bool)showsAddWidgetButtonWhileEditingForHomeScreenOverlayViewController:(SBHomeScreenOverlayViewController *)arg1;
- (bool)showsDoneButtonWhileEditingForHomeScreenOverlayViewController:(SBHomeScreenOverlayViewController *)arg1;

@end
