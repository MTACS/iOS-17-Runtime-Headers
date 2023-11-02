
@interface SiriTTSService.TTSAssetMACompactAsset : SiriTTSService.TTSAssetMAAsset

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) bool locallyAvailable;
@property (nonatomic, readonly) bool purgeable;
@property (nonatomic, readonly) TTSAssetQuality *quality;

- (id)bundle;
- (bool)locallyAvailable;
- (void)purge;
- (bool)purgeable;
- (id)quality;

@end
