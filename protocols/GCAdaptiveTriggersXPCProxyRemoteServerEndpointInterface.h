
@protocol GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface <_GCIPCRemoteEndpointInterface>

@required

- (void)fetchStatusesWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)newAdaptiveTriggerPayload:(GCDeviceAdaptiveTriggersPayload *)arg1 index:(int)arg2;

@end
