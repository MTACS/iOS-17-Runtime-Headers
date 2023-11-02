
@protocol SBFocusModesHomeScreenSettingsServerDelegate <NSObject>

@required

- (void)settingsServer:(SBFocusModesHomeScreenSettingsServer *)arg1 addSuggestedHomeScreenPageWithRequest:(SBSFocusModesHomeScreenSettingsRequest *)arg2;
- (void)settingsServer:(void *)arg1 homeScreenSnapshotsForSuggestedPagesWithRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SBFocusModesHomeScreenSettingsServer *, SBSFocusModesHomeScreenSettingsRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBSFocusModesHomeScreenSettingsResponse *, NSError *, void*
- (void)settingsServer:(void *)arg1 homeScreenSnapshotsWithRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SBFocusModesHomeScreenSettingsServer *, SBSFocusModesHomeScreenSettingsRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBSFocusModesHomeScreenSettingsResponse *, NSError *, void*
- (void)settingsServer:(SBFocusModesHomeScreenSettingsServer *)arg1 updateFocusModeHomeScreenSettingsWithRequest:(SBSFocusModesHomeScreenSettingsRequest *)arg2;

@end
