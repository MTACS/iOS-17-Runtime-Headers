
@protocol VCMediaCaptureController <NSObject>

@required

- (NSError *)startCapture;
- (NSError *)stopCapture;

@end
