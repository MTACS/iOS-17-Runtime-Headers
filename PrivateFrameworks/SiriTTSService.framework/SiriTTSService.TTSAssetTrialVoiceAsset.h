
@interface SiriTTSService.TTSAssetTrialVoiceAsset : SiriTTSService.TTSAssetTrialAsset

@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) TTSAssetTechnology *technology;

- (id)age;
- (id)assetType;
- (id)attributes;
- (long long)gender;
- (id)identifier;
- (id)name;
- (id)quality;
- (id)technology;

@end
