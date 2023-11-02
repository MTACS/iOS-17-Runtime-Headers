
@protocol SUContinuationDelegate <NSObject>

@required

- (void)continuation:(SUContinuation *)arg1 failedWithError:(NSError *)arg2;
- (void)continuationFinished:(SUContinuation *)arg1;

@end
