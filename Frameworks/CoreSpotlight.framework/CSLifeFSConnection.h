
@interface CSLifeFSConnection : CSXPCConnection

+ (id)sharedConnection;

- (void)handleError:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;

@end
