
@protocol CIDVRGBAVSessionManagerDelegate

@required

- (void)didCaptureFrame:(PADFrame *)arg1;
- (void)didCapturePhoto:(PADFrame *)arg1 error:(NSError *)arg2;
- (void)didCaptureVideoAtURL:(NSURL *)arg1 error:(NSError *)arg2;

@end
