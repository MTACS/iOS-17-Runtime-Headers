
@protocol GCSettingsXPCProxyServiceRemoteServerInterface

@required

- (void)checkEmulatedControllerEnabledWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)settingsXPCProxyServiceClientEndpointConnect:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCSettingsXPCProxyRemoteClientEndpointInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCSettingsXPCProxyRemoteServerEndpointInterface> *, NSError *, void*

@end
