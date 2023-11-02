
@interface MPMediaDownload : NSObject {
    long long  _deviceLibraryID;
    unsigned long long  _downloadPausedReason;
    double  _downloadProgress;
    long long  _downloadReason;
    long long  _libraryID;
    long long  _storeItemID;
    long long  _storeSagaID;
}

@property (nonatomic, readonly) long long deviceLibraryID;
@property (nonatomic) unsigned long long downloadPausedReason;
@property (nonatomic) double downloadProgress;
@property (nonatomic) long long downloadReason;
@property (nonatomic) long long libraryID;
@property (nonatomic, readonly) long long storeItemID;
@property (nonatomic) long long storeSagaID;

+ (unsigned long long)MPMediaDownloadPauseReasonForATAsset:(id)arg1;
+ (id)MPMediaDownloadsFromATAssets:(id)arg1;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)arg1;
+ (long long)_downloadReasonFromStoreDownload:(id)arg1;

- (id)description;
- (long long)deviceLibraryID;
- (unsigned long long)downloadPausedReason;
- (double)downloadProgress;
- (long long)downloadReason;
- (unsigned long long)hash;
- (id)initWithATAsset:(id)arg1;
- (id)initWithMPStoreDownload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)libraryID;
- (void)setDownloadPausedReason:(unsigned long long)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadReason:(long long)arg1;
- (void)setLibraryID:(long long)arg1;
- (void)setStoreSagaID:(long long)arg1;
- (long long)storeItemID;
- (long long)storeSagaID;

@end
