
@protocol HMIVideoEncoderDelegate <NSObject>

@required

- (void)encoder:(HMIVideoEncoder *)arg1 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)encoder:(HMIVideoEncoder *)arg1 didFailWithError:(NSError *)arg2;

@end
