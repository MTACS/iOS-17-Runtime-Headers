
@protocol _GCAgentServerInterface

@required

- (void)connectToUserDefaultsXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCUserDefaultsXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCUserDefaultsXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToVideoRelocationXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCVideoRelocationXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCVideoRelocationXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)pingWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
