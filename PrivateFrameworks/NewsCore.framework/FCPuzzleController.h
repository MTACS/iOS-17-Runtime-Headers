
@interface FCPuzzleController : NSObject <FCJSONEncodableObjectProviding, FCPuzzleFetchOperationDelegate> {
    FCAssetManager * _assetManager;
    <FCCoreConfigurationManager> * _configurationManager;
    NSCache * _fastCache;
    FCPuzzleRecordSource * _puzzleRecordSource;
    FCPuzzleTypeController * _puzzleTypeController;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fastCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCPuzzleRecordSource *puzzleRecordSource;
@property (nonatomic, retain) FCPuzzleTypeController *puzzleTypeController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedPuzzleForPuzzleID:(id)arg1 fastCacheOnly:(bool)arg2;
- (id)_cachedPuzzlesForPuzzleIDs:(id)arg1 fastCacheOnly:(bool)arg2;
- (id)_fetchOperationForPuzzleWithIDs:(id)arg1;
- (void)_fetchPuzzleForPuzzleID:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_fetchPuzzlesForPuzzleIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_refreshPuzzlesBasedOnAgeForPuzzles:(id)arg1;
- (void)_savePuzzlesToCache:(id)arg1;
- (id)assetManager;
- (id)configurationManager;
- (id)fastCache;
- (id)fastCachedPuzzleForID:(id)arg1;
- (void)fetchPuzzleForPuzzleID:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchPuzzlesForPuzzleIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 puzzleTypeController:(id)arg3 puzzleRecordSource:(id)arg4 configurationManager:(id)arg5;
- (id)jsonEncodableObject;
- (void)puzzleFetchOperation:(id)arg1 didFetchPuzzles:(id)arg2;
- (id)puzzleRecordSource;
- (id)puzzleTypeController;
- (void)setAssetManager:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setFastCache:(id)arg1;
- (void)setPuzzleRecordSource:(id)arg1;
- (void)setPuzzleTypeController:(id)arg1;
- (id)slowCachedPuzzleForID:(id)arg1;

@end
