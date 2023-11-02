
@interface PUTopPeopleWallpaperSuggestionsDebugViewController : PUPhotosAlbumViewController <PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate> {
    PUTopPeopleWallpaperSuggestionsDistancingContext * _distancingContext;
    PUTopPeopleWallpaperSuggesterFilteringContext * _filteringContext;
    NSDictionary * _scoreByAssetLocalIdentifier;
    PUTopPeopleWallpaperSuggestionsScoringContext * _scoringContext;
    NSMutableSet * _usedAssetLocalIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) PUTopPeopleWallpaperSuggestionsDistancingContext *distancingContext;
@property (readonly) PUTopPeopleWallpaperSuggesterFilteringContext *filteringContext;
@property (readonly) unsigned long long hash;
@property (readonly) PUTopPeopleWallpaperSuggestionsScoringContext *scoringContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (void)_editSettings:(id)arg1;
- (void)_fileRadarWithGoodSuggestions:(id)arg1 badSuggestions:(id)arg2;
- (void)_next:(id)arg1;
- (void)_presentTapToRadar;
- (void)_rewind:(id)arg1;
- (void)_update;
- (bool)_writeDiagnosticsToURL:(id)arg1 goodSuggestions:(id)arg2 badSuggestions:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)distancingContext;
- (id)filteringContext;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (id)newToolbarItems;
- (id)scoringContext;
- (void)settingsDidDismiss;
- (bool)shouldShowToolbar;
- (void)viewDidLoad;

@end
