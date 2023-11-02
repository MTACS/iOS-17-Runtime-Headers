
@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    NSDictionary * _assetUUIDsByScore;
    long long  _currentScoreIndex;
    NSEnumerator * _currentSuggestedAssetEnumerator;
    PGSuggestionOptions * _options;
    NSArray * _sortedScores;
    double  _topTierAestheticScore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastSuggestionWasColliding;
@property (readonly) Class superclass;
@property (nonatomic) double topTierAestheticScore;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)assetInternalPredicate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3;
- (bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (void)computeNiceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withProgress:(id /* block */)arg3;
- (id)nextSuggestedAssetEnumeratorWithProgress:(id /* block */)arg1;
- (id)nextSuggestedAssetWithProgress:(id /* block */)arg1;
- (id)nextSuggestionWithProgress:(id /* block */)arg1;
- (id)reasonsForSuggestion:(id)arg1;
- (void)reset;
- (unsigned long long)scoreWithAsset:(id)arg1;
- (void)setTopTierAestheticScore:(double)arg1;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (double)topTierAestheticScore;

@end
