
@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsParkedCarObserver, MapsSuggestionsPreloadableSource, MapsSuggestionsSource> {
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
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

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (void)dealloc;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithRoutine:(id)arg1 delegate:(id)arg2 name:(id)arg3;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (BOOL)suggestionsEntriesAtLocation:(id)arg1 period:(id)arg2 handler:(id /* block */)arg3;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;
- (void)updatedParkedCar;

@end
