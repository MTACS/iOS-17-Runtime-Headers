
@interface PGSharingManager : NSObject {
    PGManagerWorkingContext * _workingContext;
}

+ (id)_defaultOptions;

- (void).cxx_destruct;
- (bool)_canIncludeUnverified;
- (id)_filteredSuggestionResults:(id)arg1 withOptions:(id)arg2 graph:(id)arg3;
- (id)_learningStreamUtils;
- (void)_mergeSuggestionResultByPersonIdentifer:(id)arg1 withSourceSuggestionResults:(id)arg2;
- (id)_sortedSuggestionResults:(id)arg1 withOptions:(id)arg2;
- (bool)canProvideSuggestionsWithOptions:(id)arg1 forGraph:(id)arg2;
- (id)contextualStream;
- (id)coreDuetStream;
- (id)initWithWorkingContext:(id)arg1;
- (id)learningStream;
- (id)presenceStream;
- (id)suggestionResultsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3;
- (id)suggestionSourcesForSharingStream:(unsigned long long)arg1;

@end
