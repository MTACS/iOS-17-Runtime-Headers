
@interface CAMDrawerSharedLibraryButton : CAMControlDrawerMenuButton {
    long long  _sharedLibraryMode;
}

@property (setter=setSharedLibraryMode:, nonatomic) long long sharedLibraryMode;

- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (id)imageNameForCurrentState;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (void)setSharedLibraryMode:(long long)arg1;
- (void)setSharedLibraryMode:(long long)arg1 animated:(bool)arg2;
- (long long)sharedLibraryMode;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
