
@protocol CAMControlDrawerDelegate <NSObject>

@required

- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeAspectRatio:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeFlashMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeHDRMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeLivePhotoMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeProResVideoMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeRAWMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeSharedLibraryMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeTimerDuration:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeValueForControlType:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeVideoStabilizationMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didCreateControlForType:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didSelectMenuItemForControlType:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 wantsFilterScrubberVisible:(bool)arg2;
- (void)controlDrawerDidCreateApertureSlider:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateExposureSlider:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateFilterScrubber:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateIntensitySlider:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateLowLightSlider:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateSemanticStyleControl:(CAMControlDrawer *)arg1;
- (void)controlDrawerFlashButtonUnavailable:(CAMControlDrawer *)arg1;

@end
