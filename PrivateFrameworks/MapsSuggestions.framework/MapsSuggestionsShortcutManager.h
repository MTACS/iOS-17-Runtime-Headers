
@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader> {
    MapsSuggestionsContacts * _contacts;
    MapsSuggestionsMeCard * _currCorrectedMeCard;
    NSMutableArray * _hiddenShortcuts;
    MapsSuggestionsObservers * _meCardObservers;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    NSArray * _rawHomeAddressStrings;
    MapsSuggestionsMeCard * _rawMeCard;
    NSArray * _rawSchoolAddressStrings;
    NSArray * _rawWorkAddressStrings;
    MapsSuggestionsRoutine * _routine;
    <MapsSuggestionsShortcutStorage> * _storage;
    <MapsSuggestionsShortcutSuggestor> * _suggestor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addOrUpdateShortcuts:(id)arg1 handler:(id /* block */)arg2;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithStorage:(id)arg1 suggestor:(id)arg2 contacts:(id)arg3 routine:(id)arg4;
- (BOOL)loadAllShortcutsWithHandler:(id /* block */)arg1;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(id /* block */)arg3;
- (BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(id /* block */)arg3;
- (BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 withSnapshot:(id)arg3 handler:(id /* block */)arg4;
- (BOOL)moveShortcutToBack:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)moveShortcutToFront:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)proposeAdditionalShortcutsOfType:(long long)arg1 handler:(id /* block */)arg2;
- (BOOL)readMeCardWithHandler:(id /* block */)arg1;
- (void)registerMeCardObserver:(id)arg1;
- (BOOL)removeShortcuts:(id)arg1 handler:(id /* block */)arg2;
- (id)routine;
- (id)storage;
- (id)suggestor;
- (id)test_setUpPlaceholdersIfNeeded:(id)arg1 overlays:(id)arg2;
- (void)test_sortMapsSuggestionsShortcuts:(id)arg1;
- (id)uniqueName;
- (void)unregisterMeCardObserver:(id)arg1;

@end
