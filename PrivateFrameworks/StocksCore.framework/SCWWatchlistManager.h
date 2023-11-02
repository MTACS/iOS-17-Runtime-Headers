
@interface SCWWatchlistManager : NSObject <SCWDatabaseObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    SCWDatabase * _database;
    <SCWWatchlistDefaultsProviding> * _defaultsProvider;
    <SCWWatchlistMetadataProviding> * _metadataProvider;
    NSHashTable * _observers;
    SCWStartupQueue * _startupQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) SCWDatabase *database;
@property (nonatomic, retain) <SCWWatchlistDefaultsProviding> *defaultsProvider;
@property (nonatomic, retain) <SCWWatchlistMetadataProviding> *metadataProvider;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) SCWStartupQueue *startupQueue;

+ (id)supportedCommands;
+ (id)zoneMergeHandler;
+ (id)zoneSchema;

- (void).cxx_destruct;
- (void)_enqueueStartupSequence;
- (id)_sortedStocks:(id)arg1 withSymbolOrder:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)addStock:(id)arg1 completion:(id /* block */)arg2;
- (void)addStock:(id)arg1 watchlist:(id)arg2 completion:(id /* block */)arg3;
- (void)addWatchlist:(id)arg1 identifier:(id)arg2 sortState:(id)arg3 sortOrderState:(id)arg4 displayState:(id)arg5 completion:(id /* block */)arg6;
- (void)addWatchlistToWatchlistOrder:(id)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (id)database;
- (void)database:(id)arg1 didChangeZone:(id)arg2 from:(id)arg3 to:(id)arg4;
- (id)defaultsProvider;
- (void)fetchAllWatchlistsWithCompletion:(id /* block */)arg1;
- (void)fetchStocksFromWatchlist:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStocksWithCompletion:(id /* block */)arg1;
- (void)fetchWatchlistOrderWithCompletion:(id /* block */)arg1;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaults:(id)arg3;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaultsProvider:(id)arg3;
- (void)legacyWatchlistSortState:(id /* block */)arg1;
- (id)metadataProvider;
- (void)migrateToDefaultWatchlist:(id)arg1 sortState:(id)arg2 sortOrderState:(id)arg3 displayState:(id)arg4 completion:(id /* block */)arg5;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)removeStock:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSymbol:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSymbol:(id)arg1 watchlist:(id)arg2 completion:(id /* block */)arg3;
- (void)removeWatchlist:(id)arg1 completion:(id /* block */)arg2;
- (void)removeWatchlistFromWatchlistOrder:(id)arg1 completion:(id /* block */)arg2;
- (void)renameWatchlist:(id)arg1 newName:(id)arg2 completion:(id /* block */)arg3;
- (void)reorderStock:(id)arg1 toIndex:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 completion:(id /* block */)arg3;
- (void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 watchlist:(id)arg3 completion:(id /* block */)arg4;
- (void)reorderSymbols:(id)arg1 watchlist:(id)arg2 completion:(id /* block */)arg3;
- (void)reorderWatchlist:(id)arg1 afterWatchlist:(id)arg2 completion:(id /* block */)arg3;
- (void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 completion:(id /* block */)arg3;
- (void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 watchlist:(id)arg3 completion:(id /* block */)arg4;
- (void)sc_synchronize;
- (void)setCallbackQueue:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDefaultsProvider:(id)arg1;
- (void)setMetadataProvider:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setStartupQueue:(id)arg1;
- (id)startupQueue;
- (void)synchronize;
- (void)updateDisplayState:(id)arg1 watchlist:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSortState:(id)arg1 newSortOrderState:(id)arg2 watchlist:(id)arg3 completion:(id /* block */)arg4;

@end
