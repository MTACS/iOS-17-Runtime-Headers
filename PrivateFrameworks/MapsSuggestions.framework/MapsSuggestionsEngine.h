
@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject, MapsSuggestionsResourceDepot> {
    GEOAutomobileOptions * _automobileOptions;
    MapsSuggestionsManager * _entryManager;
    int  _mapType;
    NSObject<OS_dispatch_queue> * _optionsSerialQueue;
    <MapsSuggestionsResourceDepot> * _resourceDepot;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)addAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (void)attachSink:(id)arg1;
- (id)automobileOptions;
- (void)detachSink:(id)arg1;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)hintRefreshOfType:(long long)arg1;
- (id)initWithEntryManager:(id)arg1 resourceDepot:(id)arg2;
- (bool)loadStorageFromFile:(id)arg1;
- (bool)loadStorageFromFile:(id)arg1 callback:(id /* block */)arg2 callbackQueue:(id)arg3;
- (id)manager;
- (int)mapType;
- (id)oneBiome;
- (id)oneContactActivity;
- (id)oneContacts;
- (id)oneEventKit;
- (id)oneFavorites;
- (id)oneFinanceKit;
- (id)oneFindMy;
- (id)oneFlightUpdater;
- (id)oneInsights;
- (id)oneMapsSync;
- (id)oneNetworkRequester;
- (id)onePortrait;
- (id)oneRoutine;
- (bool)oneShotTopSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(id /* block */)arg4 onQueue:(id)arg5;
- (id)oneSourceDelegate;
- (id)oneUser;
- (id)oneVirtualGarage;
- (void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (bool)saveStorageToFile:(id)arg1 callback:(id /* block */)arg2;
- (void)setAutomobileOptions:(id)arg1;
- (void)setMapType:(int)arg1;
- (id)strategy;
- (id)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3;
- (bool)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(id /* block */)arg4 onQueue:(id)arg5;
- (id)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4;
- (bool)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(id /* block */)arg5 onQueue:(id)arg6;
- (id)uniqueName;

@end
