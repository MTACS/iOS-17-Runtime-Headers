
@protocol DYCaptureManager <NSObject>

@required

- (DYCaptureDescriptor *)activeCaptureDescriptor;
- (DYCaptureState *)activeCaptureState;
- (bool)armCaptureWithDescriptor:(DYCaptureDescriptor *)arg1;
- (DYCaptureArchive *)localActiveArchive;
- (bool)startCaptureWithDescriptor:(DYCaptureDescriptor *)arg1;
- (unsigned long long)state;
- (void)stopCapture;
- (bool)triggerArmedCapture;

@end
