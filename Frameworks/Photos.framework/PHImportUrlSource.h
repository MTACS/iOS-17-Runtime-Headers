
@interface PHImportUrlSource : PHImportSource {
    NSMutableSet * _accessedURLs;
    NSObject<OS_dispatch_queue> * _activeAssetDataRequestQueue;
    NSArray * _baseNames;
    NSObject<OS_dispatch_semaphore> * _concurrentAssetDataRequestSemaphore;
    bool  _isReadonlyVolume;
    NSObject<OS_dispatch_queue> * _pendingAssetDataRequestQueue;
    NSString * _prefix;
    NSDictionary * _resourcePathsByIdentifier;
    NSArray * _urls;
}

@property (nonatomic, retain) NSArray *baseNames;
@property (nonatomic) bool isReadonlyVolume;
@property (nonatomic, retain) NSDictionary *resourcePathsByIdentifier;
@property (nonatomic, retain) NSArray *urls;

+ (bool)treatAsReadonlyVolume:(id)arg1;

- (void).cxx_destruct;
- (id)assetsByProcessingItem:(id)arg1;
- (id)baseNames;
- (void)beginProcessingWithCompletion:(id /* block */)arg1;
- (bool)canReference;
- (bool)containsSupportedMediaWithImportExceptions:(id*)arg1;
- (void)dealloc;
- (void)dispatchAssetDataRequestAsyncUsingBlock:(id /* block */)arg1;
- (void)endWork;
- (unsigned long long)hash;
- (id)initWithUrls:(id)arg1;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToImportUrlSource:(id)arg1;
- (bool)isReadonlyVolume;
- (id)name;
- (id)path;
- (id)prefix;
- (id)productKind;
- (id)resourcePathsByIdentifier;
- (id)resourcePathsInUrls:(id)arg1;
- (id)rootUrlOfUrls:(id)arg1;
- (void)setBaseNames:(id)arg1;
- (void)setIsReadonlyVolume:(bool)arg1;
- (void)setPrefix:(id)arg1;
- (void)setResourcePathsByIdentifier:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;
- (id)volumePath;

@end
