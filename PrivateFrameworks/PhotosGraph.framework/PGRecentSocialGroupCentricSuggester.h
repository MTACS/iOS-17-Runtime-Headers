
@interface PGRecentSocialGroupCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    NSArray * _allPotentialSuggestions;
    NSArray * _eligibleAssets;
    NSEnumerator * _longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;
    NSArray * _longTimeNoSeeSocialGroupPotentialSuggestions;
    PGSuggestionOptions * _options;
    NSEnumerator * _socialGroupPotentialSuggestionEnumerator;
    NSArray * _socialGroupPotentialSuggestions;
    NSMutableSet * _usedPotentialSuggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastSuggestionWasColliding;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)assetsMatchingSocialGroup:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3 matchingAssetUUID:(id)arg4;
- (id)assetsWithPersonsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 matchAssetUUID:(id)arg3;
- (bool)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
- (id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)nextLongTimeNoSeeSocialGroupPotentialSuggestionWithProgress:(id /* block */)arg1;
- (id)nextSocialGroupPotentialSuggestionWithProgress:(id /* block */)arg1;
- (id)nextSuggestionWithProgress:(id /* block */)arg1;
- (id)potentialSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (void)reset;
- (id)socialGroupPotentialSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (void)usePotentialSuggestions:(id)arg1;
- (id)verifiedPersons;

@end
