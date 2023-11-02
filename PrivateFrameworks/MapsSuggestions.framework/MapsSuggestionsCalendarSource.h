
@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsEventKitObserver, MapsSuggestionsPreloadableSource> {
    MapsSuggestionsEventKit * _eventKit;
    NSObject<OS_dispatch_queue> * _queue;
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
- (void)eventKitDidChange:(id)arg1;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithDelegate:(id)arg1 eventKit:(id)arg2 name:(id)arg3;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (bool)suggestionsEntriesAtLocation:(id)arg1 period:(id)arg2 handler:(id /* block */)arg3;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
