
@interface CAMDrawerProResButton : CAMControlDrawerMenuButton {
    long long  _proResVideoMode;
}

@property (setter=setProResVideoMode:, nonatomic) long long proResVideoMode;

- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (long long)proResVideoMode;
- (void)setProResVideoMode:(long long)arg1;
- (void)setProResVideoMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseSlash;

@end
