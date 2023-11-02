
@protocol CAMCaptureRequestIntervalometerDelegate <NSObject>

@required

- (bool)intervalometer:(CAMCaptureRequestIntervalometer *)arg1 didGenerateCaptureRequest:(CAMCaptureRequest *)arg2;

@optional

- (void)intervalometer:(CAMCaptureRequestIntervalometer *)arg1 didReachMaximumCountWithRequest:(CAMCaptureRequest *)arg2;

@end
