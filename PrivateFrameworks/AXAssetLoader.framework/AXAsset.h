
@interface AXAsset : NSObject <NSSecureCoding> {
    NSString * _assetId;
    NSString * _assetType;
    NSNumber * _cachedComputedOnDiskSize;
    unsigned long long  _compatibilityVersion;
    unsigned long long  _contentVersion;
    bool  _didAttachProgressHandler;
    unsigned long long  _formatVersion;
    bool  _isDownloading;
    bool  _isInstalled;
    NSURL * _localCopyURL;
    MAAsset * _maAsset;
    NSURL * _originalURL;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) NSString *assetId;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSString *characterVoiceLanguage;
@property (nonatomic, readonly) NSString *characterVoiceName;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;
@property (nonatomic, readonly) NSNumber *computedOnDiskSize;
@property (nonatomic, readonly) unsigned long long contentVersion;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) unsigned long long formatVersion;
@property (nonatomic, readonly) AXImageCaptionModel *imageCaptionModel;
@property (nonatomic, readonly) bool isDownloading;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isUsingSoundPrint;
@property (nonatomic, retain) NSURL *localCopyURL;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic, readonly) MAAsset *maAsset;
@property (nonatomic, retain) NSURL *originalURL;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSString *ultronModelName;
@property (nonatomic, readonly) NSNumber *unarchivedFileSize;

+ (id)archivedAssets:(id)arg1 error:(id*)arg2;
+ (id)assetsFromMAAssets:(id)arg1;
+ (id)downloadableAssets:(id)arg1;
+ (id)installedAssets:(id)arg1;
+ (id)newsestCompatibleImageCaptionModelAssetFromAssets:(id)arg1 withStage:(id)arg2 language:(id)arg3 isInstalled:(bool)arg4 isDownloadable:(bool)arg5;
+ (bool)supportsSecureCoding;
+ (id)unarchivedAssets:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)assertionForVersionLockedImageCaptionModelAsset:(id)arg1;
- (id)assetId;
- (id)assetInfoDictionary;
- (bool)assetStateIsInstalled:(long long)arg1;
- (id)assetType;
- (void)attachProgressHandlerIfNeeded:(id /* block */)arg1;
- (id)characterVoiceLanguage;
- (id)characterVoiceName;
- (unsigned long long)compatibilityVersion;
- (id)computedOnDiskSize;
- (unsigned long long)contentVersion;
- (void)copyLocally;
- (id)description;
- (id)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)formatVersion;
- (id)imageCaptionModel;
- (id)initWithCoder:(id)arg1;
- (id)initWithMAAsset:(id)arg1;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToMAAsset:(id)arg1;
- (bool)isInstalled;
- (bool)isOlderThanAsset:(id)arg1;
- (bool)isUsingSoundPrint;
- (id)localCopyURL;
- (id)localURL;
- (id)maAsset;
- (id)originalURL;
- (id)properties;
- (void)refreshMAAsset;
- (void)resetPropertiesFromMAAsset:(id)arg1;
- (void)setLocalCopyURL:(id)arg1;
- (void)setOriginalURL:(id)arg1;
- (id)ultronModelName;
- (id)unarchivedFileSize;

@end
