
@interface PGLongTailSuggester : PGAbstractSuggester {
    PGLongTailAdditionalOptions * _additionalOptions;
    NSMutableSet * _candidateAssetsFromPreviousBatch;
    NSArray * _eligibleAssetUUIDs;
    unsigned long long  _maximumNumberOfSuggestions;
    NSString * _meNodeLocalIdentifier;
    unsigned long long  _numberOfGeneratedSuggestions;
    PGSuggestionOptions * _options;
    unsigned int  _randomSeed;
    NSMutableSet * _suggestedAssetsFromPreviousBatch;
    double  _topTierAestheticScoreThreshold;
    NSDictionary * _verifiedPersonUUIDsByAssetUUIds;
}

+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1 seed:(unsigned int)arg2;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)_assetUUIDByWeightedProbablisticSamplingFromAssetUUIDS:(id)arg1 weights:(id)arg2;
- (id)_assetUUIDsFromAssets:(id)arg1 atIndices:(id)arg2;
- (id)_batchOfRandomAssetsWithCount:(unsigned long long)arg1 progress:(id /* block */)arg2;
- (id)_bestAssetUUIDsFromCandidates:(id)arg1 percentile:(unsigned long long)arg2;
- (id)_candidateByAssetUUIDsFromAssets:(id)arg1;
- (id)_eligibleAssetUUIDsWithProgress:(id /* block */)arg1;
- (id)_fetchVerifiedPersonUUIDsByAssetUUIds:(id)arg1;
- (unsigned long long)_longTailScoreWithAsset:(id)arg1 withAdditionalOptions:(id)arg2;
- (id)_nextCandidateAssetsWithProgress:(id /* block */)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_randomRangeWithLocationUpperBound:(unsigned long long)arg1 maxLength:(unsigned long long)arg2;
- (bool)_shouldUsePreviousBatchOfCandidateAssets;
- (id)allInterestingMomentsFromGraph:(id)arg1 progress:(id /* block */)arg2;
- (bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (void)captureInformationFromGraph:(id)arg1;
- (id)highlightedAssetInternalPredicate;
- (bool)isMomentNodeInteresting:(id)arg1 withNeighborScoreComputer:(id)arg2;
- (id)nextSuggestedAssetWithProgress:(id /* block */)arg1;
- (id)nextSuggestionWithProgress:(id /* block */)arg1;
- (id)reasonsForSuggestion:(id)arg1;
- (void)reset;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
