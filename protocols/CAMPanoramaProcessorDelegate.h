
@protocol CAMPanoramaProcessorDelegate <NSObject>

@required

- (void)panoramaProcessor:(CAMPanoramaProcessor *)arg1 didProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withStatus:(int)arg3 forRequest:(CAMPanoramaCaptureRequest *)arg4;

@end
