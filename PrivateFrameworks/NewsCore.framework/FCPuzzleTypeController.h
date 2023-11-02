
@interface FCPuzzleTypeController : NSObject <FCJSONEncodableObjectProviding, FCPuzzleTypeFetchOperationDelegate> {
    FCAssetManager * _assetManager;
    <FCContentContext> * _context;
    NSCache * _fastCache;
    FCPuzzleTypeRecordSource * _puzzleTypeRecordSource;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) <FCContentContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fastCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCPuzzleTypeRecordSource *puzzleTypeRecordSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedPuzzleTypeForPuzzleTypeID:(id)arg1 fastCacheOnly:(bool)arg2;
- (id)_cachedPuzzleTypesForPuzzleTypeIDs:(id)arg1 fastCacheOnly:(bool)arg2;
- (id)_fetchOperationForPuzzleTypeWithIDs:(id)arg1;
- (void)_fetchPuzzleTypeForPuzzleTypeID:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_fetchPuzzleTypesForPuzzleTypeIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_refreshPuzzleTypesBasedOnAgeForPuzzleTypes:(id)arg1;
- (void)_savePuzzleTypesToCache:(id)arg1;
- (id)assetManager;
- (id)context;
- (id)fastCache;
- (id)fastCachedPuzzleTypeForID:(id)arg1;
- (void)fetchPuzzleTypeForPuzzleTypeID:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchPuzzleTypesForPuzzleTypeIDs:(id)arg1 cachePolicy:(id)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 context:(id)arg2 assetManager:(id)arg3 puzzleTypeRecordSource:(id)arg4 configurationManager:(id)arg5;
- (id)jsonEncodableObject;
- (void)puzzleTypeFetchOperation:(id)arg1 didFetchPuzzleTypes:(id)arg2;
- (id)puzzleTypeRecordSource;
- (void)setAssetManager:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFastCache:(id)arg1;
- (void)setPuzzleTypeRecordSource:(id)arg1;
- (id)slowCachedPuzzleTypeForID:(id)arg1;

@end
