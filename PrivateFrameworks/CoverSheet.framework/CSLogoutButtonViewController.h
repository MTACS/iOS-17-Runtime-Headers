
@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase {
    <CSUserSessionControlling> * _userSessionController;
    <CSWallpaperColorProvider> * _wallpaperColorProvider;
    <CSWallpaperProviding> * _wallpaperProvider;
}

@property (nonatomic, readonly) CSVibrantWallpaperButton *button;
@property (nonatomic) <CSUserSessionControlling> *userSessionController;
@property (nonatomic) <CSWallpaperColorProvider> *wallpaperColorProvider;
@property (nonatomic) <CSWallpaperProviding> *wallpaperProvider;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (id)button;
- (void)loadView;
- (void)setUserSessionController:(id)arg1;
- (void)setWallpaperColorProvider:(id)arg1;
- (void)setWallpaperProvider:(id)arg1;
- (void)setWallpaperViewProvider:(id)arg1;
- (id)userSessionController;
- (id)wallpaperColorProvider;
- (id)wallpaperProvider;

@end
