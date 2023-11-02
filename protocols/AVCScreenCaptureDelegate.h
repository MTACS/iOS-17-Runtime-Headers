
@protocol AVCScreenCaptureDelegate <NSObject>

@optional

- (void)screenCapture:(AVCScreenCapture *)arg1 didStart:(bool)arg2 withError:(NSError *)arg3;
- (void)screenCapture:(AVCScreenCapture *)arg1 didStop:(bool)arg2 withError:(NSError *)arg3;
- (void)screenCapture:(AVCScreenCapture *)arg1 didUpdateAttributes:(AVCScreenCaptureAttributes *)arg2 error:(NSError *)arg3;
- (void)serverDidDisconnect:(AVCScreenCapture *)arg1;

@end
