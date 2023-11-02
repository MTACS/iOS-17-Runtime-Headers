
@protocol GCLightXPCProxyRemoteServerEndpointInterface <_GCIPCRemoteEndpointInterface>

@required

- (void)fetchLightWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GCDeviceLight *, void*
- (void)newLight:(GCDeviceLight *)arg1;

@end
