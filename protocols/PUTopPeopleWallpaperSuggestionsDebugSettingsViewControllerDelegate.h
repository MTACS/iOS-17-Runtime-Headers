
@protocol PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate <NSObject>

@required

- (PUTopPeopleWallpaperSuggestionsDistancingContext *)distancingContext;
- (PUTopPeopleWallpaperSuggesterFilteringContext *)filteringContext;
- (PUTopPeopleWallpaperSuggestionsScoringContext *)scoringContext;
- (void)settingsDidDismiss;

@end
