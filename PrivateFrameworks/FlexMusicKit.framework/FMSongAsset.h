
@interface FMSongAsset : NSObject {
    NSString * _assetID;
    unsigned long long  _assetStatus;
    long long  _compatibilityVersion;
    long long  _contentVersion;
    double  _downloadProgress;
    NSURL * _localURL;
    NSString * _songUID;
}

@property (readonly) NSString *assetID;
@property (readonly) unsigned long long assetStatus;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) bool contentUpdateAvailable;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic, readonly) bool isCloudBacked;
@property (readonly) NSURL *localURL;
@property (retain) NSString *songUID;

- (void).cxx_destruct;
- (id)assetID;
- (unsigned long long)assetStatus;
- (void)cancelDownload;
- (long long)compatibilityVersion;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (bool)contentUpdateAvailable;
- (bool)contentUpdateAvaliable;
- (long long)contentVersion;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (double)downloadProgress;
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5;
- (id)initWithURL:(id)arg1 assetID:(id)arg2 contentVersion:(long long)arg3 compatibilityVersion:(long long)arg4;
- (bool)isCloudBacked;
- (id)localURL;
- (bool)localURLExists;
- (void)purgeLocalCache;
- (void)requestDownload;
- (void)requestDownloadWithOptions:(id)arg1;
- (void)setSongUID:(id)arg1;
- (id)songUID;
- (bool)updateDownloadProgress:(double)arg1;

@end
