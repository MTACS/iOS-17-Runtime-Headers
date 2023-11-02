
@interface MapsSuggestionsVirtualGarageSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsVirtualGarageObserver> {
    NSObject<OS_dispatch_queue> * _queue;
    MapsSuggestionsVirtualGarage * _virtualGarage;
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
- (id)initWithVirtualGarage:(id)arg1 delegate:(id)arg2 name:(id)arg3;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (void)unpairedVehiclesChangedInVirtualGarage:(id)arg1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
