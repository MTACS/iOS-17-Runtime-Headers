
@protocol GTMTLCaptureServiceObserver

@required

- (void)notifyCaptureObjectsChanged:(GTCaptureObjects *)arg1;
- (void)notifyCaptureProgress:(GTCaptureProgress *)arg1;
- (void)notifyCaptureRequest:(GTCaptureDescriptor *)arg1;
- (void)notifyUnsupportedFenum:(GTUnsupportedFenumInfo *)arg1;

@end
