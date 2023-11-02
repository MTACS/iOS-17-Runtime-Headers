
@interface MapsSuggestions.MapsSuggestionsContactActivity : NSObject <MapsSuggestionsObject> {
    void _biome;
    void _cacheForMapItems;
    void _contacts;
    void _findMy;
    void _networkRequester;
    void _queue;
    void contactActivityDelegate;
    void uniqueName;
}

@property (nonatomic) <_TtP15MapsSuggestions38MapsSuggestionsContactActivityDelegate_> *contactActivityDelegate;
@property (nonatomic, copy) NSString *uniqueName;

- (void).cxx_destruct;
- (id)contactActivityDelegate;
- (void)contactActivityEntriesWith:(id /* block */)arg1;
- (id)init;
- (id)initFromResourceDepot:(id)arg1;
- (void)setContactActivityDelegate:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (id)uniqueName;

@end
