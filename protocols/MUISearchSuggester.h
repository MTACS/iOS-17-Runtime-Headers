
@protocol MUISearchSuggester <NSObject>

@required

- (NSArray *)categories;
- (<MUISearchSuggesterQuery> *)generateSuggestionsUsingPhraseManager:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: MUISearchSuggestionPhraseManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSString *)logIdentifier;
- (bool)shouldQueryForAsYouType;

@end
