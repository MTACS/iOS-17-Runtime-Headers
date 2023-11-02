
@protocol SBSFocusModesHomeScreenSettingsClientToServerInterface <NSObject>

@required

- (oneway void)addSuggestedHomeScreenPageWithRequest:(SBSFocusModesHomeScreenSettingsRequest *)arg1;
- (oneway void)homeScreenSnapshotsForSuggestedPagesWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SBSFocusModesHomeScreenSettingsRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBSFocusModesHomeScreenSettingsResponse *, NSError *, void*
- (oneway void)homeScreenSnapshotsWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SBSFocusModesHomeScreenSettingsRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBSFocusModesHomeScreenSettingsResponse *, NSError *, void*
- (oneway void)updateFocusModeHomeScreenSettingsWithRequest:(SBSFocusModesHomeScreenSettingsRequest *)arg1;

@end
