
@protocol RTCVideoDecoderFactory <NSObject>

@required

- (<RTCVideoDecoder> *)createDecoder:(WK_RTCVideoCodecInfo *)arg1;
- (NSArray *)supportedCodecs;

@end
