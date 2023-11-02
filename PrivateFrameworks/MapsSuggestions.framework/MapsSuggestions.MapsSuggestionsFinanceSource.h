
@interface MapsSuggestions.MapsSuggestionsFinanceSource : MapsSuggestionsBaseSource <MapsSuggestionsObject> {
    void _delegate;
    void _financeKit;
    void _updateCompleteHandler;
    void queue;
}

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (id)init;
- (id)initFromResourceDepot:(id)arg1;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesOfType:(long long)arg1 handler:(id /* block */)arg2;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
