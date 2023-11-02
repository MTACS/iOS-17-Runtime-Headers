
@protocol RTCVideoEncoderFactory <NSObject>

@required

- (<RTCVideoEncoder> *)createEncoder:(WK_RTCVideoCodecInfo *)arg1;
- (NSArray *)supportedCodecs;

@optional

- (NSArray *)implementations;

@end
