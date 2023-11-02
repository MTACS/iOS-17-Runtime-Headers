
@protocol HMIVideoRetimerDelegate <NSObject>

@required

- (void)retimer:(HMIVideoRetimer *)arg1 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;

@end
