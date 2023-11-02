
@protocol MapsSuggestionsPreloadableSource <MapsSuggestionsSource>

@required

- (bool)suggestionsEntriesAtLocation:(void *)arg1 period:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: CLLocation *, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
