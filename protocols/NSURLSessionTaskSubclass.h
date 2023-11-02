
@protocol NSURLSessionTaskSubclass <NSObject>

@required

- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;

@end
