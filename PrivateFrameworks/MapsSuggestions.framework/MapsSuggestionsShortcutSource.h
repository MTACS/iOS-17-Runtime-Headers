
@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <MapsSuggestionsMeCardObserver, MapsSuggestionsSource> {
    NSObject<OS_dispatch_queue> * _queue;
    MapsSuggestionsShortcutManager * _shortcutManager;
    MapsSuggestionsCanKicker * _updateForcer;
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
- (void)_renameDuplicateMeCardTypes:(id)arg1;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;
- (id)initWithShortcutManager:(id)arg1 delegate:(id)arg2 name:(id)arg3;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)arg1;

@end
