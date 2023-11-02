
@interface PGAbstractSuggester : NSObject <PGSuggester> {
    bool  _isSharedLibraryEnabled;
    bool  _lastSuggestionWasColliding;
    bool  _prefetchedSharedLibraryState;
    PGSuggestionSession * _session;
    NSSet * _sharedLibraryPersonIdentifiers;
    CLSSceneConfidenceThresholdHelper * _suggestableScenesHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastSuggestionWasColliding;
@property (nonatomic) PGSuggestionSession *session;
@property (readonly) Class superclass;

+ (id)_sharedLibraryPersonIdentifiersInLibrary:(id)arg1 withScope:(id)arg2;
+ (id)internalPredicateForProcessedAssetsWithMinimumSceneAnalysisVersion:(unsigned long long)arg1;
+ (bool)lastSuggestionWasColliding;
+ (id)noVideoPredicate;
+ (void)setLastSuggestionWasColliding:(bool)arg1;
+ (id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(bool*)arg3;
+ (id)suggesterWithSession:(id)arg1;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (void)_prefetchSharedLibraryStateIfNeeded;
- (bool)assetIsValidForSuggesting:(id)arg1;
- (bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (id)defaultAssetFetchOptionsWithInternalPredicate:(id)arg1;
- (bool)hasSuggestableScenesWithAsset:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)lastSuggestionWasColliding;
- (bool)processedAssetIsValidForSuggesting:(id)arg1 allowGuestAsset:(bool)arg2;
- (id)reasonsForSuggestion:(id)arg1;
- (id)session;
- (void)setLastSuggestionWasColliding:(bool)arg1;
- (void)setSession:(id)arg1;
- (id)sharingSuggestionResultsForMomentNodes:(id)arg1 withWorkingContext:(id)arg2;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (double)userFeedbackScoreWithAsset:(id)arg1;

@end
