
@protocol PXAppleMusicAssetProperties <NSObject>

@required

- (<PXAudioCueSource> *)cueSource;
- (NSNumber *)loudnessMainPeak;
- (NSNumber *)loudnessMainValue;

@end
