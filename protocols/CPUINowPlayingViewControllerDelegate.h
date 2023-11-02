
@protocol CPUINowPlayingViewControllerDelegate <NSObject>

@optional

- (NSArray *)customPlaybackControlButtonsForNowPlayingViewController:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 buttonShouldBeActive:(long long)arg2;
- (void)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 didSelectButton:(UIButton *)arg2;
- (void)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (bool)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(NSString *)arg4 tinted:(out bool*)arg5;
- (void)nowPlayingViewControllerAddToLibrary:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerAlbumArtistButtonTapped:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanRepeat:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowAddToLibrary:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowAlbumArt:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowAlbumLink:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowChangePlaybackRate:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowMore:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowUpNext:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShuffle:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerChangePlaybackRate:(CPUINowPlayingViewController *)arg1;
- (NSNumber *)nowPlayingViewControllerGetPlaybackRate:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerIsFuseSubscriber:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerIsRightHandDrive:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerMore:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerShouldUseMusicExplicitGlyph:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerUpNextButtonTapped:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerWillAppear:(CPUINowPlayingViewController *)arg1;
- (NSString *)titleForUpNextInNowPlayingViewController:(CPUINowPlayingViewController *)arg1;

@end
