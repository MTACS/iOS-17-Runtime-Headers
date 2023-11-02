
@interface PGPeopleWallpaperSuggester : PGAbstractSuggester <PGPeopleWallpaperSuggesterProtocol> {
    PGWallpaperSuggestionAssetGater * _assetGater;
    PGSinglePersonWallpaperAssetSuggesterDistancingContext * _distancingContext;
    PGPeopleWallpaperSuggesterFilteringContext * _primaryFilteringContext;
    PGSinglePersonWallpaperAssetSuggesterScoringContext * _scoringContext;
    PGPeopleWallpaperSuggesterFilteringContext * _secondaryFilteringContext;
    NSDictionary * _suggesterByPersonLocalIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGPeopleWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGPeopleWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)enableSettlingEffect;
+ (bool)filtersForTopSuggestions;
+ (bool)passesFilteringWithAsset:(id)arg1 curationContext:(id)arg2 orientation:(long long)arg3 reason:(id*)arg4;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (void)_buildSuggestersWithProgress:(id /* block */)arg1;
- (id)initWithSession:(id)arg1;
- (id)personLocalIdentifiersByOriginalPersonLocalIdentifierWithProgress:(id /* block */)arg1;
- (id)primaryFilteringContext;
- (id)secondaryFilteringContext;
- (void)setPrimaryFilteringContext:(id)arg1;
- (void)setSecondaryFilteringContext:(id)arg1;
- (void)setupFilteringContexts;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
