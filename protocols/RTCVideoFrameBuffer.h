
@protocol RTCVideoFrameBuffer <NSObject>

@required

- (void)close;
- (int)height;
- (<RTCI420Buffer> *)toI420;
- (int)width;

@end
