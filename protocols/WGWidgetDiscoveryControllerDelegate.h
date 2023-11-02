
@protocol WGWidgetDiscoveryControllerDelegate <NSObject>

@optional

- (bool)areWidgetsPinnedForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (bool)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (bool)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (bool)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (bool)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (id)statusBarAssertionForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 legibilityStyle:(long long)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 didChangeWidgetsPinning:(bool)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 didEndUsingStatusBarAssertion:(id)arg2;
- (UIViewController *)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 preferredViewControllerForPresentingFromViewController:(UIViewController *)arg2;
- (void)widgetDiscoveryController:(void *)arg1 requestUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: WGWidgetDiscoveryController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(NSString *)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 updateStatusBarAssertion:(id)arg2 withLegibilityStyle:(long long)arg3;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithBundleIdentifier:(NSString *)arg2 didEncounterProblematicSnapshotAtURL:(NSURL *)arg3;
- (void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(WGWidgetDiscoveryController *)arg1;
- (bool)widgetDiscoveryControllerShouldIncludeInternalWidgets:(WGWidgetDiscoveryController *)arg1;
- (bool)widgetDiscoveryControllerShouldRespectFavorites:(WGWidgetDiscoveryController *)arg1;

@end
