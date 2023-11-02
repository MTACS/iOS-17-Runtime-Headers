
@protocol VCVideoSink <NSObject>

@required

- (bool)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;

@optional

- (id /* block */)copyOnVideoFrameBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, struct opaqueCMSampleBuffer { }*, struct { long long x1; int x2; unsigned int x3; long long x4; }, struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; }*, void*, id, SEL

@end
