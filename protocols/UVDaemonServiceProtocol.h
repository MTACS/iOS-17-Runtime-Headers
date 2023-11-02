
@protocol UVDaemonServiceProtocol <NSObject>

@required

- (oneway void)copyURLToAgentDescriptorPayload:(void *)arg1 usingData:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 9: UVPropertyList *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (oneway void)grantExecutePermissionToAgentDescriptorPayload:(void *)arg1 usingData:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 8: UVPropertyList *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)sendPreviewServiceMessage:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 8: UVPropertyList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UVPropertyList *, NSError *, void*

@end
