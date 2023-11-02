
@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {
    NSMutableDictionary * _hasStarted;
    NSMutableDictionary * _nextUpdateTimes;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    bool  _running;
    NSMutableSet * _sources;
    MapsSuggestionsSuppressor * _suppressor;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addChildSource:(id)arg1;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2;
- (bool)attachSource:(id)arg1;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (id)children;
- (void)dealloc;
- (bool)detachSource:(id)arg1;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (bool)removeChildSource:(id)arg1;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (bool)running;
- (void)setRunning:(bool)arg1;
- (id)sources;
- (void)start;
- (void)stop;
- (void)test_awaitQueue;
- (id)test_dateUntilSuppressedEntry:(id)arg1;
- (void)test_resetSuppressions;
- (double)test_suppressionDurationForBehavior:(long long)arg1 type:(long long)arg2;
- (void)test_sync;
- (double)updateSuggestionEntriesOfType:(long long)arg1 handler:(id /* block */)arg2;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
