
@interface PGOnThisDaySmallMemorySuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    NSDictionary * _momentByMomentLocalIdentifier;
    PGSuggestionOptions * _options;
    NSEnumerator * _suggestedMomentLocalIdentifierEnumerator;
    NSArray * _suggestedMomentLocalIdentifiers;
    NSString * _titleDateMatchingTitleOnThisDay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastSuggestionWasColliding;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void).cxx_destruct;
- (id)momentByMomentLocalIdentifierWithMomentLocalIdentifiers:(id)arg1;
- (id)nextSuggestionWithProgress:(id /* block */)arg1;
- (void)reset;
- (id)sortedMomentLocalIdentifiersWithDateIgnoringYearBeforeDateYear:(id)arg1;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionWithMomentLocalIdentifier:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
