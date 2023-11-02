
@protocol LNConnectionOperationDelegate <NSObject>

@required

- (void)connectionOperation:(LNConnectionOperation *)arg1 didFinishWithError:(NSError *)arg2;
- (void)connectionOperationWillStart:(LNConnectionOperation *)arg1;

@end
