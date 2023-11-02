
@protocol PUPlayButtonTileViewControllerDelegate <NSObject>

@optional

- (double)playButtonTileViewController:(PUPlayButtonTileViewController *)arg1 delayForButtonAnimation:(bool)arg2;
- (void)playButtonTileViewControllerDidTapButton:(PUPlayButtonTileViewController *)arg1;
- (bool)playButtonTileViewControllerShouldShowPauseButton:(PUPlayButtonTileViewController *)arg1;
- (bool)playButtonTileViewControllerShouldShowPlayButtonWhileActivated:(PUPlayButtonTileViewController *)arg1;

@end
