
@interface NUANFAssetLoader : NSObject {
    FCAsyncOnceOperation * _assetURLsOperation;
    FCAsyncOnceOperation * _assetsOperation;
    SXContext * _context;
    NSMutableDictionary * _fetchedResourceIDs;
    FCFlintResourceManager * _flintResourceManager;
    long long  _relativePriority;
    NSArray * _resourceIDs;
}

@property (nonatomic, retain) FCAsyncOnceOperation *assetURLsOperation;
@property (nonatomic, readonly) FCAsyncOnceOperation *assetsOperation;
@property (nonatomic, retain) SXContext *context;
@property (nonatomic, retain) NSMutableDictionary *fetchedResourceIDs;
@property (nonatomic, retain) FCFlintResourceManager *flintResourceManager;
@property (nonatomic) long long relativePriority;
@property (nonatomic, retain) NSArray *resourceIDs;

- (void).cxx_destruct;
- (id)assetDownloadOperationForResource:(id)arg1 completion:(id /* block */)arg2;
- (id)assetURLsOperation;
- (id)assetsOperation;
- (id)asyncLoadAssetURLsOnceWithCompletion:(id /* block */)arg1;
- (id)asyncLoadAssetsOnceWithCompletion:(id /* block */)arg1;
- (id)context;
- (id)fallbackResourceForID:(id)arg1;
- (id)fetchedResourceIDs;
- (id)flintResourceManager;
- (id)initWithContext:(id)arg1 flintResourceManager:(id)arg2;
- (id)loadAssetURLsWithCompletion:(id /* block */)arg1;
- (id)loadAssetWithURL:(id)arg1 completion:(id /* block */)arg2;
- (id)loadAssetsWithCompletion:(id /* block */)arg1;
- (long long)relativePriority;
- (id)resourceForID:(id)arg1;
- (id)resourceIDForResourceURL:(id)arg1;
- (id)resourceIDs;
- (void)setAssetURLsOperation:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFetchedResourceIDs:(id)arg1;
- (void)setFlintResourceManager:(id)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setResourceIDs:(id)arg1;

@end
