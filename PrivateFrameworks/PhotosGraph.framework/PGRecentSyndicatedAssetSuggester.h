
@interface PGRecentSyndicatedAssetSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
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
- (id)createSuggestionWithAsset:(id)arg1;
- (id)eligibleAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3 progress:(id /* block */)arg4;
- (id)nextSuggestionWithProgress:(id /* block */)arg1;
- (id)reasonsForSuggestion:(id)arg1;
- (void)reset;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
