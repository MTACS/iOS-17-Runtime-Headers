
@protocol PXMutableVolumeController

@required

- (void)decreaseVolume;
- (void)increaseVolume;
- (bool)isInSilentMode;
- (void)setIsInSilentMode:(bool)arg1;

@end
