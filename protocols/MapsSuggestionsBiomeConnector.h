
@protocol MapsSuggestionsBiomeConnector <MapsSuggestionsObject>

@required

- (bool)getFindMyStreamsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*
- (bool)getSmartRepliesStreamsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*
- (bool)registerForFindMyUpdatesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*
- (bool)registerForSmartRepliesUpdatesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*
- (void)unregisterFindMyUpdates;
- (void)unregisterSmartRepliesUpdates;

@end
