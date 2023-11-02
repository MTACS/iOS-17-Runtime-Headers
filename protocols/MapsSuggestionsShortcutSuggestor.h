
@protocol MapsSuggestionsShortcutSuggestor <NSObject>

@required

+ (id)new;

- (id)init;
- (id)initFromResourceDepot:(id <MapsSuggestionsInternalResourceDepot>)arg1;
- (BOOL)suggestShortcutsOfType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
