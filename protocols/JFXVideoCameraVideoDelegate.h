
@protocol JFXVideoCameraVideoDelegate <NSObject>

@required

- (void)renderVideoFrame:(PVFrameSet *)arg1;

@optional

- (void)droppedVideoFrame:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
