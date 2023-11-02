
@protocol CATOperationObserver <NSObject>

@optional

- (void)operationDidFinish:(NSOperation *)arg1;
- (void)operationDidProgress:(NSOperation *)arg1;
- (void)operationDidStart:(NSOperation *)arg1;

@end
