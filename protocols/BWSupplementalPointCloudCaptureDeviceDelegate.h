
@protocol BWSupplementalPointCloudCaptureDeviceDelegate <NSObject>

@required

- (void)pointCloudCaptureDevice:(BWFigVideoCaptureDevice *)arg1 willEmitPointCloudSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;

@end
