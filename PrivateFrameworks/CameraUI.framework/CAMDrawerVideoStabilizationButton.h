
@interface CAMDrawerVideoStabilizationButton : CAMControlDrawerMenuButton {
    long long  _videoStabilizationMode;
}

@property (setter=setVideoStabilizationMode:, nonatomic) long long videoStabilizationMode;

- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (void)setVideoStabilizationMode:(long long)arg1;
- (void)setVideoStabilizationMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;
- (long long)videoStabilizationMode;

@end
