
@interface SBSFocusModesHomeScreenSettingsService : NSObject

+ (id)activateConnection;
+ (void)addSuggestedHomeScreenPageWithRequest:(id)arg1;
+ (void)homeScreenSnapshotsForSuggestedPagesWithRequest:(id)arg1 completion:(id /* block */)arg2;
+ (void)homeScreenSnapshotsWithRequest:(id)arg1 completion:(id /* block */)arg2;
+ (void)updateFocusModeHomeScreenSettingsWithRequest:(id)arg1;

@end
