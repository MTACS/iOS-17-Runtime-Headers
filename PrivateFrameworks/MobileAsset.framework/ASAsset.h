
@interface ASAsset : NSObject {
    NSString * _assetType;
    NSDictionary * _attributes;
    NSString * _clientName;
    NSDictionary * _downloadOptions;
    NSString * _identifier;
    MAAsset * _maAsset;
    id /* block */  _progressHandler;
    bool  _userInitiatedDownload;
    MAAsset * maAsset;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, readonly) NSDictionary *downloadOptions;
@property (nonatomic, readonly) NSDictionary *fullAttributes;
@property (nonatomic) long long garbageCollectionBehavior;
@property (nonatomic, readonly) NSDate *installDate;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic, retain) MAAsset *maAsset;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) long long state;
@property (nonatomic) bool userInitiatedDownload;

+ (bool)nonUserInitiatedDownloadsAllowed;

- (void).cxx_destruct;
- (void)_downloadWithOptions:(id)arg1 shouldFireCallback:(bool)arg2;
- (id)_getLocalAttribute:(id)arg1;
- (void)adjustDownloadOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)assetServerUrl;
- (long long)assetStateForStateString:(id)arg1;
- (id)assetType;
- (id)attributes;
- (void)beginDownloadWithOptions:(id)arg1;
- (void)cancelDownload:(id /* block */)arg1;
- (bool)cancelDownloadAndReturnError:(id*)arg1;
- (id)clientName;
- (id)description;
- (id)downloadOptions;
- (id)fullAttributes;
- (long long)garbageCollectionBehavior;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAssetType:(id)arg1 attributes:(id)arg2;
- (id)initWithMAAsset:(id)arg1;
- (id)installDate;
- (bool)isEqual:(id)arg1;
- (bool)isPresentOnDisk;
- (id)localURL;
- (id)maAsset;
- (void)pauseDownload:(id /* block */)arg1;
- (bool)pauseDownloadAndReturnError:(id*)arg1;
- (id /* block */)progressHandler;
- (void)purge:(id /* block */)arg1;
- (bool)purgeAndReturnError:(id*)arg1;
- (bool)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2;
- (bool)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3;
- (void)resumeDownload:(id /* block */)arg1;
- (bool)resumeDownloadAndReturnError:(id*)arg1;
- (void)setClientName:(id)arg1;
- (void)setGarbageCollectionBehavior:(long long)arg1;
- (void)setMaAsset:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setUserInitiatedDownload:(bool)arg1;
- (long long)state;
- (id)systemAppServerUrl;
- (bool)userInitiatedDownload;

@end
