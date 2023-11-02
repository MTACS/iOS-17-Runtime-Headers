
@interface MapsSuggestionsContactActivitySource : MapsSuggestionsBaseSource <MapsSuggestions.MapsSuggestionsContactActivityDelegate> {
    _TtC15MapsSuggestions30MapsSuggestionsContactActivity * _contactActivity;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (void)contactActivityUpdated;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithContactActivity:(id)arg1 delegate:(id)arg2 name:(id)arg3;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
