
@interface WKWallpaperBundleDownloadManager : NSObject {
    NSMutableDictionary * __activeDownloads;
    NSError * __catalogDownloadError;
    NSNumber * __catalogDownloadResult;
    NSObject<OS_dispatch_queue> * __loadingQueue;
    NSMutableDictionary * __localAssetLookup;
    NSString * _assetDownloadIdentifier;
    NSObject<WKWallpaperBundleDownloadManagerDelegate> * _delegate;
}

@property (nonatomic, retain) NSMutableDictionary *_activeDownloads;
@property (nonatomic, retain) NSError *_catalogDownloadError;
@property (nonatomic, retain) NSNumber *_catalogDownloadResult;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (nonatomic, retain) NSMutableDictionary *_localAssetLookup;
@property (nonatomic, readonly, copy) NSString *assetDownloadIdentifier;
@property (nonatomic) NSObject<WKWallpaperBundleDownloadManagerDelegate> *delegate;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)_activeDownloads;
- (id)_catalogDownloadError;
- (id)_catalogDownloadResult;
- (id)_loadingQueue;
- (id)_localAssetLookup;
- (id)_startCatalogDownload;
- (id)assetDownloadIdentifier;
- (void)cancelDownloadForWallpaperRepresenting:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)delegate;
- (void)downloadWallpaperRepresentingIfNeeded:(id)arg1 progress:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithAssetDownloadIdentifier:(id)arg1;
- (id)localWallpaperRepresentingWithIdentifier:(id)arg1 wallpaperName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)set_activeDownloads:(id)arg1;
- (void)set_catalogDownloadError:(id)arg1;
- (void)set_catalogDownloadResult:(id)arg1;
- (void)set_loadingQueue:(id)arg1;
- (void)set_localAssetLookup:(id)arg1;

@end
