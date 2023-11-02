
@protocol PLCropOverlayDelegate <NSObject>

@optional

- (NSArray *)cropOverlayFileSizeMenuActions:(PLCropOverlay *)arg1;
- (void)cropOverlayPause:(PLCropOverlay *)arg1;
- (void)cropOverlayPlay:(PLCropOverlay *)arg1;
- (void)cropOverlayWasCancelled:(PLCropOverlay *)arg1;
- (void)cropOverlayWasOKed:(PLCropOverlay *)arg1;
- (void)cropOverlayWasToggled:(PLCropOverlay *)arg1;
- (void)motionToggledManually:(bool)arg1;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;

@end
