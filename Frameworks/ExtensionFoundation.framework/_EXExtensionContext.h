
@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeRequestWithHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;

@end
