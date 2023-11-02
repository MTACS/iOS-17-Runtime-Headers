
@protocol UVAgentControlServiceProtocol <NSObject>

@required

- (oneway void)connectHostMessagePipeWithEndpoint:(UVBSEndpoint *)arg1;
- (oneway void)connectJITWithEndpoint:(void *)arg1 setupPayload:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 9: NSXPCListenerEndpoint *, UVPropertyList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UVPropertyList *, NSError *, void*
- (oneway void)connectShellMessagePipeWithEndpoint:(UVBSEndpoint *)arg1;
- (oneway void)copyURLWithURLWrapperData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (oneway void)createPreviewNonUIAgentWithEndpoint:(UVBSEndpoint *)arg1;
- (oneway void)createPreviewSceneAgentWithEndpoint:(UVBSEndpoint *)arg1 forSceneIdentifier:(NSString *)arg2;
- (oneway void)grantExecutePermissionWithURLWrapperData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
