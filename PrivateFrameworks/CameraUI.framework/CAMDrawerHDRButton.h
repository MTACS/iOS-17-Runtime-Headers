
@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton {
    bool  _allowAutoHDR;
    bool  _allowHDROn;
    long long  _hdrMode;
}

@property (nonatomic) bool allowAutoHDR;
@property (nonatomic) bool allowHDROn;
@property (setter=setHDRMode:, nonatomic) long long hdrMode;

- (bool)allowAutoHDR;
- (bool)allowHDROn;
- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (long long)hdrMode;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (void)setAllowAutoHDR:(bool)arg1;
- (void)setAllowHDROn:(bool)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
