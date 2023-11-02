
@protocol NSURLConnectionRequired <NSObject>

@optional

- (void)_resumeLoading;
- (void)_setDelegateQueue:(NSOperationQueue *)arg1;
- (void)_setShouldSkipCancelOnRelease:(bool)arg1;
- (void)_suspendLoading;
- (void)cancel;
- (void)scheduleInRunLoop:(NSRunLoop *)arg1 forMode:(NSString *)arg2;
- (void)start;
- (void)unscheduleFromRunLoop:(NSRunLoop *)arg1 forMode:(NSString *)arg2;

@end
