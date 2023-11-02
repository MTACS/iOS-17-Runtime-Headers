
@protocol CPUINowPlayingViewControllerDataSource <NSObject>

@required

- (NSString *)albumTextForNowPlayingController:(CPUINowPlayingViewController *)arg1;
- (NSString *)artistTextForNowPlayingController:(CPUINowPlayingViewController *)arg1;
- (UIImage *)backgroundArtForNowPlayingController:(CPUINowPlayingViewController *)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })durationSnapshotForNowPlayingViewController:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerIsPlaying:(CPUINowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerIsShowingExplicitTrack:(CPUINowPlayingViewController *)arg1;
- (NSString *)titleForNowPlayingController:(CPUINowPlayingViewController *)arg1;

@optional

- (long long)placeholderTypeForNowPlayingViewController:(CPUINowPlayingViewController *)arg1;
- (NSString *)progressBarLocalizedDurationStringForNowPlayingViewController:(CPUINowPlayingViewController *)arg1;
- (long long)repeatTypeForNowPlayingViewController:(CPUINowPlayingViewController *)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(CPUINowPlayingViewController *)arg1;

@end
