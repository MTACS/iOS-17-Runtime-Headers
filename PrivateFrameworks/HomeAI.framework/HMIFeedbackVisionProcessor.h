
@interface HMIFeedbackVisionProcessor : HMFObject

+ (bool)reencodeAssetURL:(id)arg1 outputURL:(id)arg2 bitRate:(long long)arg3 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 analysisFPS:(float)arg5 sampleFrameHandler:(id /* block */)arg6 dropFrameHandler:(id /* block */)arg7;

- (void)_addEventsToEventQueue:(id)arg1 events:(id)arg2;
- (unsigned int)_blurRadiusForEvents:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_blurSampleBufferWithEncoder:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 events:(id)arg3;
- (struct __CVBuffer { }*)_createBlurredPixelBuffer:(struct __CVBuffer { }*)arg1 events:(id)arg2;
- (bool)blurFacesFromAssetURL:(id)arg1 outputURL:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 analysisFPS:(float)arg4 windowSize:(unsigned long long)arg5 faceDetected:(bool*)arg6;

@end
