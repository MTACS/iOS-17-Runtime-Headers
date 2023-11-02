
@protocol LNPerformActionOperationDelegate <NSObject>

@required

- (LNAppContext *)appContext;
- (void)performActionOperation:(LNPerformActionOperation *)arg1 didFinishWithResult:(id)arg2 error:(NSError *)arg3;
- (NSXPCConnection *)xpcConnection;

@end
