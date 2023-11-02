
@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton {
    long long  _livePhotoMode;
}

@property (nonatomic) long long livePhotoMode;

- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (bool)isMenuItemSelected:(id)arg1;
- (long long)livePhotoMode;
- (id)loadMenuItems;
- (void)setLivePhotoMode:(long long)arg1;
- (void)setLivePhotoMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
