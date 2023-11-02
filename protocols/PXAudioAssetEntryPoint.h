
@protocol PXAudioAssetEntryPoint <NSObject>

@required

- (float)fadeInGainAtOffset:(double)arg1;
- (NSArray *)fadeInKeyGainValues;
- (NSArray *)fadeInKeyTimeOffsets;
- (double)time;

@end
