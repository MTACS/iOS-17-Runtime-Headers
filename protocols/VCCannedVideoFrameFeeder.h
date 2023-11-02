
@protocol VCCannedVideoFrameFeeder <NSObject>

@required

- (struct __CVBuffer { }*)createPixelBufferForFrameIndex:(int)arg1;
- (void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
- (int)setWidth:(int)arg1 height:(int)arg2;

@end
