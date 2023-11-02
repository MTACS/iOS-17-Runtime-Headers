
@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegateProxy> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
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
- (void)Debug_updateGraph;
- (void)addOrUpdateSuggestionEntriesData:(id)arg1 sourceNameData:(id)arg2 handler:(id /* block */)arg3;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (void)dealloc;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesOfType:(long long)arg1 handler:(id /* block */)arg2;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
