
@protocol ISOperationDelegate <NSObject>

@optional

- (void)operation:(ISOperation *)arg1 failedWithError:(NSError *)arg2;
- (void)operation:(ISOperation *)arg1 updatedProgress:(SSOperationProgress *)arg2;
- (void)operationFinished:(ISOperation *)arg1;
- (void)operationWillStart:(ISOperation *)arg1;

@end
