
@protocol PGCoordinatableSuggester <PGSuggester>

@required

- (<PGSuggestion> *)nextSuggestionWithProgress:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (void)reset;
- (void)startSuggestingWithOptions:(PGSuggestionOptions *)arg1;

@end
