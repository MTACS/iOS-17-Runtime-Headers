
@protocol NSXPCStoreServerDelegate

@optional

- (NSString *)identifierForConnection:(NSXPCConnection *)arg1;
- (void)performRecoveryForError:(NSError *)arg1 fromContext:(NSXPCStoreServerConnectionContext *)arg2;
- (bool)willPerformRecoveryForError:(NSError *)arg1 fromContext:(NSXPCStoreServerConnectionContext *)arg2;

@end
