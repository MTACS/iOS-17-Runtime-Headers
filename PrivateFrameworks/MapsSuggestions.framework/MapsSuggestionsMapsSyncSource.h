
@interface MapsSuggestionsMapsSyncSource : MapsSuggestionsBaseSource <MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource> {
    MapsSuggestionsMapsSync * _mapsSync;
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
- (void)awaitQueue;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithMapsSync:(id)arg1 delegate:(id)arg2 name:(id)arg3;
- (void)mapsSync:(id)arg1 didChangeForContentType:(long long)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
