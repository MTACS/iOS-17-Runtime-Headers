
@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton {
    long long  _flashMode;
    bool  _flashUnavailable;
}

@property (nonatomic) long long flashMode;
@property (getter=isFlashUnavailable, nonatomic) bool flashUnavailable;

- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (long long)flashMode;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (id)imageSymbolColorConfiguration;
- (bool)isExpandable;
- (bool)isFlashUnavailable;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (void)setFlashMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1 animated:(bool)arg2;
- (void)setFlashUnavailable:(bool)arg1;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
