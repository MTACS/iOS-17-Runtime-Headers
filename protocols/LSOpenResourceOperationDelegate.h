
@protocol LSOpenResourceOperationDelegate <NSObject>

@optional

- (void)openResourceOperation:(NSOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)openResourceOperation:(NSOperation *)arg1 didFinishCopyingResource:(NSURL *)arg2;
- (void)openResourceOperationDidComplete:(NSOperation *)arg1;

@end
