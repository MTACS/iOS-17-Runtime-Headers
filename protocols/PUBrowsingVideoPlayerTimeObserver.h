
@protocol PUBrowsingVideoPlayerTimeObserver <NSObject>

@required

- (void)videoPlayer:(PUBrowsingVideoPlayer *)arg1 currentTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)videoPlayer:(PUBrowsingVideoPlayer *)arg1 desiredSeekTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
