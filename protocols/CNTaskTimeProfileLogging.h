
@protocol CNTaskTimeProfileLogging <NSObject>

@required

- (void)task:(CNTask *)arg1 didCompleteAfter:(double)arg2;
- (void)task:(CNTask *)arg1 didFailWithError:(NSError *)arg2 after:(double)arg3;
- (void)taskWillBegin:(CNTask *)arg1;

@end
