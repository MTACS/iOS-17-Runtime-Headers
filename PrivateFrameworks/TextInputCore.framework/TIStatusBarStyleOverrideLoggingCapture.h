
@interface TIStatusBarStyleOverrideLoggingCapture : NSObject

+ (long long)_decrementLoggingCaptureOverride;
+ (long long)_incrementLoggingCaptureOverride;
+ (long long*)_loggingCaptureOverrideCountPtr;
+ (void)_statusBarStyleOverrideLoggingCapture:(bool)arg1;
+ (void)acquireLoggingCaptureOverride;
+ (void)releaseLoggingCaptureOverride;

- (void)dealloc;
- (id)init;

@end
