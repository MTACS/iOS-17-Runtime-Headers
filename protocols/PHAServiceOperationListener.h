
@protocol PHAServiceOperationListener <NSObject>

@required

- (void)operationDidFinish:(PHAServiceCancelableOperation *)arg1;
- (void)operationWillStart:(PHAServiceCancelableOperation *)arg1;

@end
