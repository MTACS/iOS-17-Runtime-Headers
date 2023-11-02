
@interface SBWidgetController : NSObject <CSWidgetGroupViewControllerProviding, SBExtensionHandling, WGWidgetDiscoveryControllerDelegate> {
    WGWidgetDiscoveryController * _widgetDiscoveryController;
}

@property (nonatomic) bool bootstrapFavoriteWidgets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_widgetDiscoveryController, nonatomic, retain) WGWidgetDiscoveryController *widgetDiscoveryController;

- (void).cxx_destruct;
- (void)_reloadWidgetPreferences;
- (bool)_shouldUsePinnedWidgets;
- (id)_widgetDiscoveryController;
- (bool)areWidgetsPinnedForWidgetDiscoveryController:(id)arg1;
- (bool)bootstrapFavoriteWidgets;
- (bool)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)arg1;
- (bool)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)arg1;
- (id)init;
- (void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)newAvocadoWidgetListViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x1; bool x2; bool x3; bool x4; })arg1;
- (id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x1; bool x2; bool x3; bool x4; })arg1;
- (id)newWidgetListViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x1; bool x2; bool x3; bool x4; })arg1;
- (void)removeWidgetIdentifiersFromToday:(id)arg1;
- (void)setBootstrapFavoriteWidgets:(bool)arg1;
- (void)setWidgetDiscoveryController:(id)arg1;
- (bool)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)arg1;
- (bool)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)arg1;
- (id)statusBarAssertionForWidgetDiscoveryController:(id)arg1 legibilityStyle:(long long)arg2;
- (id)todayWidgetIdentifiers;
- (void)widgetDiscoveryController:(id)arg1 didChangeWidgetsPinning:(bool)arg2;
- (void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2;
- (id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
- (void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(id /* block */)arg2;
- (bool)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2;
- (void)widgetDiscoveryController:(id)arg1 updateStatusBarAssertion:(id)arg2 withLegibilityStyle:(long long)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3;
- (void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)arg1;
- (bool)widgetDiscoveryControllerShouldRespectFavorites:(id)arg1;

@end
