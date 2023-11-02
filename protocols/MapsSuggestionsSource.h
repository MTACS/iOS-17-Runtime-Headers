
@protocol MapsSuggestionsSource <MapsSuggestionsObject>

@required

+ (unsigned long long)disposition;
+ (bool)isEnabled;
+ (id)new;

- (bool)canProduceEntriesOfType:(long long)arg1;
- (<MapsSuggestionsSourceDelegate> *)delegate;
- (void)feedbackForContact:(CNContact *)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(MapsSuggestionsEntry *)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(GEOMapItemStorage *)arg1 action:(long long)arg2;
- (id)init;
- (id)initFromResourceDepot:(id <MapsSuggestionsResourceDepot>)arg1 name:(NSString *)arg2;
- (bool)removeEntry:(void *)arg1 behavior:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: MapsSuggestionsEntry *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <MapsSuggestionsSourceDelegate>)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesOfType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (double)updateSuggestionEntriesWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
