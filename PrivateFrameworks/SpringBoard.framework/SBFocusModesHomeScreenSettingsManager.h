
@interface SBFocusModesHomeScreenSettingsManager : NSObject <SBFocusModesHomeScreenSettingsServerDelegate> {
    SBFocusModesHomeScreenSettingsServer * _settingsServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBFocusModesHomeScreenSettingsServer *settingsServer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_snapshotRemainingListViews:(id)arg1 snapshotDelay:(double)arg2 snapshotScale:(double)arg3 excludeWallpaper:(bool)arg4 forFocusModeIdentifier:(id)arg5 iconManager:(id)arg6 rootFolderView:(id)arg7 accumulatedSnapshots:(id)arg8 completion:(id /* block */)arg9;
- (void)_snapshotRootFolderView:(id)arg1 snapshotDelay:(double)arg2 snapshotScale:(double)arg3 excludeWallpaper:(bool)arg4 focusModeIdentifier:(id)arg5 iconManager:(id)arg6 isSuggestedPage:(bool)arg7 completion:(id /* block */)arg8;
- (id)init;
- (void)setSettingsServer:(id)arg1;
- (id)settingsServer;
- (void)settingsServer:(id)arg1 addSuggestedHomeScreenPageWithRequest:(id)arg2;
- (void)settingsServer:(id)arg1 homeScreenSnapshotsForSuggestedPagesWithRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)settingsServer:(id)arg1 homeScreenSnapshotsWithRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)settingsServer:(id)arg1 updateFocusModeHomeScreenSettingsWithRequest:(id)arg2;

@end
