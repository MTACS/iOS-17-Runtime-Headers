
@protocol PHAServiceOperationHandling <NSObject>

@required

- (void)handleOperation:(PHAServiceCancelableOperation *)arg1;
- (bool)validateOperation:(PHAServiceCancelableOperation *)arg1 forConnection:(NSXPCConnection *)arg2;

@end
