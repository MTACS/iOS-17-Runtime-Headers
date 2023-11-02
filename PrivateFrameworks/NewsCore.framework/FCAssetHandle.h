
@interface FCAssetHandle : NSObject <FCContentArchivable> {
    NSString * _assetKey;
    NTPBAsset * _assetMetadata;
    unsigned long long  _countOfPenalizedDownloadAttempts;
    <FCAssetDataProvider> * _dataProvider;
    NSDate * _dateOfLastDownloadAttempt;
    <FCAssetHandleDelegate> * _delegate;
    NSError * _downloadError;
    NSHashTable * _downloadRequests;
    NSObject<OS_dispatch_group> * _fetchGroup;
    FCOperation * _fetchOperation;
    FCInterestToken * _holdToken;
    long long  _lifetimeHint;
    NSString * _rawFilePath;
    NSURL * _remoteURL;
    NFUnfairLock * _stateLock;
}

@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (retain) <FCAssetDataProvider> *dataProvider;
@property (readonly) NSError *downloadError;
@property (readonly, copy) NSString *filePath;
@property (nonatomic, readonly) NSURL *remoteURL;
@property (nonatomic, readonly, copy) NSString *uniqueKey;

- (void).cxx_destruct;
- (id)contentArchive;
- (id)dataProvider;
- (void)dealloc;
- (id)downloadError;
- (id)downloadIfNeededWithCompletion:(id /* block */)arg1;
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadIfNeededWithGroup:(id)arg1;
- (id)downloadIfNeededWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (id)fetchDataProviderWithCompletion:(id /* block */)arg1;
- (id)fetchDataProviderWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (id)filePath;
- (id)remoteURL;
- (void)setDataProvider:(id)arg1;
- (id)uniqueKey;

@end
