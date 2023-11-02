
@protocol LAServiceManager <NSObject>

@required

- (void)bootstrapSessionServiceType:(void *)arg1 clientID:(void *)arg2 clientConnection:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSXPCConnection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)bootstrapSessionServiceType:(void *)arg1 clientID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)shutdownSessionsWithMatchingID:(NSString *)arg1;

@end
