
@protocol TVMediaControllerDelegate <NSObject>

@optional

- (void)coverImageDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)didFinishPlaybackForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)mediaController:(UIViewController<TVMediaController> *)arg1 shouldShowStill:(inout bool*)arg2 afterStoppingForReason:(long long)arg3;
- (void)stateDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;

@end
