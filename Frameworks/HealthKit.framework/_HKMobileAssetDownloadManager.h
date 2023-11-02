
@interface _HKMobileAssetDownloadManager : NSObject {
    NSMutableSet * _downloadingQueryParams;
    id /* block */  _errorHandler;
    long long  _maxNumberOfRetriesAllowed;
    id /* block */  _mobileAssetDownloadCompletionHandler;
    MADownloadOptions * _mobileAssetDownloadOptions;
    long long  _mobileAssetQueryReturnTypes;
    NSString * _mobileAssetTypeName;
    NSMutableArray * _pendingOperations;
    NSObject<OS_dispatch_queue> * _queue;
    _HKMobileAssetDownloadManager * _retainedSelf;
    bool  _shouldAutoDownloadRemoteAssets;
    bool  _shouldQueryLocalAssetsFirst;
}

@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) long long maxNumberOfRetriesAllowed;
@property (nonatomic, copy) id /* block */ mobileAssetDownloadCompletionHandler;
@property (nonatomic, copy) MADownloadOptions *mobileAssetDownloadOptions;
@property (nonatomic) long long mobileAssetQueryReturnTypes;
@property (nonatomic, readonly, copy) NSString *mobileAssetTypeName;
@property (nonatomic) bool shouldAutoDownloadRemoteAssets;
@property (nonatomic) bool shouldQueryLocalAssetsFirst;

- (void).cxx_destruct;
- (void)_callDownloadCompletionHandlerWithAssets:(id)arg1 queryParams:(id)arg2;
- (void)_callErrorHandlerWithError:(id)arg1;
- (id)_errorWithDomain:(id)arg1 code:(long long)arg2;
- (id)_generateAssetQueryFromQueryParams:(id)arg1 returnTypes:(long long)arg2;
- (void)_queue_downloadAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_fetchAssetsWithLocalInformation:(bool)arg1 shouldRequery:(bool)arg2 queryParams:(id)arg3 returnTypes:(long long)arg4;
- (void)_queue_fetchAssetsWithQuery:(id)arg1 onlyLocal:(bool)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)description;
- (void)downloadAssetsWithQueryParams:(id)arg1;
- (void)downloadMobileAssets:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)errorHandler;
- (void)fetchAssetsWithQueryParams:(id)arg1 onlyLocal:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchAssetsWithQueryParams:(id)arg1 onlyLocal:(bool)arg2 returnTypes:(long long)arg3 completion:(id /* block */)arg4;
- (id)initWithMobileAssetTypeName:(id)arg1 queue:(id)arg2;
- (long long)maxNumberOfRetriesAllowed;
- (id /* block */)mobileAssetDownloadCompletionHandler;
- (id)mobileAssetDownloadOptions;
- (long long)mobileAssetQueryReturnTypes;
- (id)mobileAssetTypeName;
- (void)removeMobileAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setMaxNumberOfRetriesAllowed:(long long)arg1;
- (void)setMobileAssetDownloadCompletionHandler:(id /* block */)arg1;
- (void)setMobileAssetDownloadOptions:(id)arg1;
- (void)setMobileAssetQueryReturnTypes:(long long)arg1;
- (void)setShouldAutoDownloadRemoteAssets:(bool)arg1;
- (void)setShouldQueryLocalAssetsFirst:(bool)arg1;
- (bool)shouldAutoDownloadRemoteAssets;
- (bool)shouldQueryLocalAssetsFirst;
- (id)unitTesting_queue;

@end
