
@interface MapsSuggestionsContacts : NSObject <MapsSuggestionsMeCardReader> {
    MapsSuggestionsLimitedDictionary * _cache;
    <MapsSuggestionsContactsConnector> * _connector;
    MapsSuggestionsMeCard * _currMeCard;
    MapsSuggestionsDarwinNotificationTrigger * _geoActiveTileGroupChangedTrigger;
    MapsSuggestionsLocaleChangedTrigger * _localeChangedTrigger;
    MapsSuggestionsObservers * _meCardObservers;
    <MapsSuggestionsNetworkRequester> * _networkRequester;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)awaitQueue;
- (id)contactNameForIdentifier:(id)arg1;
- (void)contactsDidUpdate;
- (id)dataForContactWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)friendlyNameForIndentifier:(id)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithConnector:(id)arg1 networkRequester:(id)arg2;
- (id)profilePictureForIdentifier:(id)arg1;
- (BOOL)readMeCardAddressStringsWithHandler:(id /* block */)arg1;
- (BOOL)readMeCardWithHandler:(id /* block */)arg1;
- (void)registerMeCardObserver:(id)arg1;
- (id)uniqueName;
- (void)unregisterMeCardObserver:(id)arg1;

@end
