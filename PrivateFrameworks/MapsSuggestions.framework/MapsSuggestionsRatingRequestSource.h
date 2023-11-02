
@interface MapsSuggestionsRatingRequestSource : MapsSuggestionsBaseSource <MapsSuggestionsBudgetDelegate, MapsSuggestionsSource> {
    MapsSuggestionsBudget * _budget;
    MapsSuggestionsMapsSync * _mapsSync;
    NSObject<OS_dispatch_queue> * _queue;
    MapsSuggestionsRoutine * _routine;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithMapsSync:(id)arg1 routine:(id)arg2 delegate:(id)arg3 name:(id)arg4;
- (id)readBudgetState;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;
- (void)writeBudgetState:(id)arg1;

@end
