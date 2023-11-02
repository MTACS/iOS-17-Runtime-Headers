
@protocol VCScreenCaptureSource <NSObject>

@required

- (int)pauseScreenCapture:(bool)arg1;
- (int)startScreenCaptureWithConfig:(NSDictionary *)arg1;
- (int)stopScreenCapture;

@end
