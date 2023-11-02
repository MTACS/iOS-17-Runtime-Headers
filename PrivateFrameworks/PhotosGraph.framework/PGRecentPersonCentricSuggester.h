
@interface PGRecentPersonCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    NSDictionary * _assetsByPersonLocalIdentifier;
    NSEnumerator * _birthdayPersonPotentialSuggestionEnumerator;
    NSArray * _birthdayPersonPotentialSuggestions;
    NSEnumerator * _longTimeNoSeePersonPotentialSuggestionEnumerator;
    NSArray * _longTimeNoSeePersonPotentialSuggestions;
    PGSuggestionOptions * _options;
    NSEnumerator * _personPotentialSuggestionEnumerator;
    NSArray * _personPotentialSuggestions;
    NSMutableSet * _usedPersonLocalIdentifiers;
    NSDictionary * _verifiedPersonByPersonLocalIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastSuggestionWasColliding;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)assetsByPersonLocalIdentifierWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)assetsWithSinglePersonBetweenStartDate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3 progress:(id /* block */)arg4;
- (id)assetsWithSinglePersonWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)birthdayPersonPotentialSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (id)lastAssetWithPerson:(id)arg1 beforeDate:(id)arg2 matchingAssetUUID:(id)arg3;
- (id)longTimeNoSeePersonPotentialSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)nextBirthdayPersonPotentialSuggestionWithProgress:(id /* block */)arg1;
- (id)nextLongTimeNoSeePersonPotentialSuggestionWithProgress:(id /* block */)arg1;
- (id)nextPersonPotentialSuggestionWithProgress:(id /* block */)arg1;
- (id)nextPotentialSuggestionWithProgress:(id /* block */)arg1;
- (id)nextSuggestionWithProgress:(id /* block */)arg1;
- (id)personPotentialSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (unsigned long long)relationScoreWithPersonNode:(id)arg1;
- (void)reset;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionWithPotentialSuggestion:(id)arg1 progress:(id /* block */)arg2;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (void)updateUsedPersonLocalIdentifiersFromPotentialSuggestions:(id)arg1;
- (id)verifiedPersonByPersonLocalIdentifier;

@end
