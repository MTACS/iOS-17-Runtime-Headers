
@protocol MapsSuggestionsRelevanceScoreProvider <MapsSuggestionsObject>

@required

- (void)preLoad;
- (BOOL)relevanceScoreForNames:(void *)arg1 addresses:(void *)arg2 mapItems:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
