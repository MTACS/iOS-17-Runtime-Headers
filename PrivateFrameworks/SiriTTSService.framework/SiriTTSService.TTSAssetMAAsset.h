
@interface SiriTTSService.TTSAssetMAAsset : TTSAsset {
    void asset;
}

@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) bool downloading;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool locallyAvailable;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool purgeable;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) long long versionNumber;

- (void).cxx_destruct;
- (id)age;
- (id)assetSource;
- (id)assetType;
- (id)attributes;
- (id)bundle;
- (void)cancelDownloadingThen:(id /* block */)arg1;
- (id)diskSize;
- (id)downloadSize;
- (void)downloadWithReservation:(id)arg1 useBattery:(bool)arg2 progress:(id /* block */)arg3 then:(id /* block */)arg4;
- (bool)downloading;
- (long long)gender;
- (id)identifier;
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
