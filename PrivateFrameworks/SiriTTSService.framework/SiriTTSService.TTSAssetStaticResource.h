
@interface SiriTTSService.TTSAssetStaticResource : TTSAsset {
    void asset;
    void assetAttr;
}

@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSString *identifier;
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
- (id)attributes;
- (id)bundle;
- (id)diskSize;
- (id)identifier;
- (id)init;
- (id)name;
- (bool)purgeable;
- (id)quality;
- (id)supportedLanguages;
- (id)technology;
- (id)versionDescription;
- (long long)versionNumber;

@end
