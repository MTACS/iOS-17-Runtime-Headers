
@protocol AVMobileVolumeChromlesButtonControlDelegate <NSObject>

@optional

- (void)volumeControlButton:(AVMobileVolumeChromelessButtonControl *)arg1 didContinuePanningWithXDelta:(double)arg2;
- (bool)volumeControlButtonCanBeginPanning:(AVMobileVolumeChromelessButtonControl *)arg1;
- (void)volumeControlButtonDidBeginPanning:(AVMobileVolumeChromelessButtonControl *)arg1;
- (void)volumeControlButtonDidEndPanning:(AVMobileVolumeChromelessButtonControl *)arg1;

@end
