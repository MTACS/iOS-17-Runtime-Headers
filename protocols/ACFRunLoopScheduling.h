
@protocol ACFRunLoopScheduling <NSObject>

@required

- (void)scheduleInRunLoop:(NSRunLoop *)arg1 forMode:(NSString *)arg2;
- (void)unscheduleFromRunLoop:(NSRunLoop *)arg1 forMode:(NSString *)arg2;

@end
