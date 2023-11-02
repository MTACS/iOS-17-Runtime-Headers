
@interface SiriTTSService.TTSAssetFactoryTrialAsset : TTSAsset {
    void asset;
    void factorName;
}

@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) bool downloading;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) bool locallyAvailable;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool purgeable;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) long long versionNumber;

- (void).cxx_destruct;
- (id)assetSource;
- (id)assetType;
- (id)bundle;
- (id)diskSize;
- (bool)downloading;
- (long long)gender;
- (id)init;
- (bool)locallyAvailable;
- (id)name;
- (void)purge;
- (bool)purgeable;
- (id)quality;
- (id)supportedLanguages;
- (id)technology;
- (id)versionDescription;
- (long long)versionNumber;

@end
