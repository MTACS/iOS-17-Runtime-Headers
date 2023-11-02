
@interface CAMDrawerRAWButton : CAMControlDrawerMenuButton {
    long long  _rawMode;
}

@property (setter=setRAWMode:, nonatomic) long long rawMode;

- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (long long)rawMode;
- (void)setRAWMode:(long long)arg1;
- (void)setRAWMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseSlash;

@end
