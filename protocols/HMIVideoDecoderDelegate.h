
@protocol HMIVideoDecoderDelegate <NSObject>

@optional

- (void)decoder:(HMIVideoDecoder *)arg1 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)decoder:(HMIVideoDecoder *)arg1 didFailWithError:(NSError *)arg2;

@end
