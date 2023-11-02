
@interface PGRecentAestheticsSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions * _options;
    NSEnumerator * _suggestedAssetEnumerator;
    NSArray * _suggestedAssets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastSuggestionWasColliding;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (id)nextSuggestionWithProgress:(id /* block */)arg1;
- (id)niceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3 progress:(id /* block */)arg4;
- (id)reasonsForSuggestion:(id)arg1;
- (void)reset;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
