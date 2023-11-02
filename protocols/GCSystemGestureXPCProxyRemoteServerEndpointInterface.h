
@protocol GCSystemGestureXPCProxyRemoteServerEndpointInterface <_GCIPCRemoteEndpointInterface>

@required

- (void)disableSystemGestureForInput:(NSString *)arg1;
- (void)enableSystemGestureForInput:(NSString *)arg1;
- (void)fetchSystemGesturesStateWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GCSystemGesturesState *, void*

@end
