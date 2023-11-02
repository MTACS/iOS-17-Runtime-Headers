
@protocol PGSuggester <NSObject>

@required

+ (id)suggesterWithSession:(PGSuggestionSession *)arg1;
+ (NSIndexSet *)suggestionSubtypes;
+ (NSIndexSet *)suggestionTypes;

- (bool)canGenerateSuggestionWithAsset:(PHAsset *)arg1 onDate:(NSDate *)arg2;
- (id)initWithSession:(PGSuggestionSession *)arg1;
- (bool)lastSuggestionWasColliding;
- (NSArray *)reasonsForSuggestion:(id <PGSuggestion>)arg1;
- (void)setLastSuggestionWasColliding:(bool)arg1;
- (NSArray *)suggestionsWithOptions:(void *)arg1 progress:(void *)arg2; // needs 2 arg types, found 8: PGSuggestionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*

@end
