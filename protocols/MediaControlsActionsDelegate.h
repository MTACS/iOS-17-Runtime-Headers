
@protocol MediaControlsActionsDelegate <NSObject>

@required

- (void)presentLanguageOptions;
- (void)presentRatingActionSheet:(MPCPlayerResponseItem *)arg1 sourceView:(UIView *)arg2;
- (void)presentTVRemote;
- (bool)shouldShowTVRemoteButton;

@end
