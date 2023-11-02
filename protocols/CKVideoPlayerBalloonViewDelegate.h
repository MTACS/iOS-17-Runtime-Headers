
@protocol CKVideoPlayerBalloonViewDelegate <CKBalloonViewDelegate>

@required

- (UIViewController *)parentViewControllerForReusableVideoPlayer:(CKReusableVideoPlayer *)arg1;
- (CKVideoPlayerReusePool *)videoPlayerReusePool;

@end
