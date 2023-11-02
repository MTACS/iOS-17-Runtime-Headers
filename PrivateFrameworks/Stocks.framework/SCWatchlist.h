
@interface SCWatchlist : NSObject <SCKDatabaseObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    SCKDatabase * _database;
    <SCWatchlistDefaultsProviding> * _defaultsProvider;
    <SCWatchlistMetadataProviding> * _metadataProvider;
    NSHashTable * _observers;
    SCKStartupQueue * _startupQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) SCKDatabase *database;
@property (nonatomic, retain) <SCWatchlistDefaultsProviding> *defaultsProvider;
@property (nonatomic, retain) <SCWatchlistMetadataProviding> *metadataProvider;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) SCKStartupQueue *startupQueue;

+ (id)supportedCommands;
+ (id)zoneMergeHandler;
+ (id)zoneSchema;

- (void).cxx_destruct;
- (void)_enqueueStartupSequence;
- (id)_sortedStocks:(id)arg1 withSymbolOrder:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)addStock:(id)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (id)database;
- (void)database:(id)arg1 didChangeZone:(id)arg2 from:(id)arg3 to:(id)arg4;
- (id)defaultsProvider;
- (void)fetchStocksWithCompletion:(id /* block */)arg1;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaults:(id)arg3;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaultsProvider:(id)arg3;
- (id)metadataProvider;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)removeStock:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSymbol:(id)arg1 completion:(id /* block */)arg2;
- (void)reorderStock:(id)arg1 toIndex:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 completion:(id /* block */)arg3;
- (void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 completion:(id /* block */)arg3;
- (void)setCallbackQueue:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDefaultsProvider:(id)arg1;
- (void)setMetadataProvider:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setStartupQueue:(id)arg1;
- (id)startupQueue;
- (void)synchronize;

@end
