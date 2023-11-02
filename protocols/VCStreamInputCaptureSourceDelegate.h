
@protocol VCStreamInputCaptureSourceDelegate <NSObject>

@required

- (void)didResumeStreamInputCaptureSource;
- (void)didStartStreamInputCaptureSource;
- (void)didStopStreamInputCaptureSource;
- (void)didSuspendStreamInputCaptureSource;

@end
