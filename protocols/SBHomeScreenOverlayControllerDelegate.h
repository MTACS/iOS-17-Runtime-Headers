
@protocol SBHomeScreenOverlayControllerDelegate

@required

- (UIView *)backgroundViewForEditingDoneButtonForHomeScreenOverlayController:(SBHomeScreenOverlayController *)arg1;
- (NSString *)homeScreenOverlayController:(SBHomeScreenOverlayController *)arg1 displayLayoutIdentifierForSidebarViewController:(UIViewController *)arg2;
- (void)homeScreenOverlayController:(SBHomeScreenOverlayController *)arg1 setSuppressesEditingStateForListView:(bool)arg2;
- (void)homeScreenOverlayWantsToEndEditing:(SBHomeScreenOverlayController *)arg1;
- (void)homeScreenOverlayWantsWidgetEditingViewControllerPresented:(SBHomeScreenOverlayController *)arg1;
- (bool)isEditingForHomeScreenOverlayController:(SBHomeScreenOverlayController *)arg1;
- (bool)showsAddWidgetButtonWhileEditingForHomeScreenOverlayController:(SBHomeScreenOverlayController *)arg1;
- (bool)showsDoneButtonWhileEditingForHomeScreenOverlayController:(SBHomeScreenOverlayController *)arg1;

@end
