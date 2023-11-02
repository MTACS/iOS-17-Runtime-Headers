
@protocol _GCAppServerInterface

@required

- (void)clientCanReceiveEventsDidChange:(bool)arg1;
- (void)connectToAdaptiveTriggersXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCAdaptiveTriggersXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToBatteryXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCBatteryXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCBatteryXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToControllerServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCControllerServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCControllerServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToGameIntentXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCGameIntentXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCGameIntentXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToLightXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCLightXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCLightXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToMotionXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCMotionXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCMotionXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToPhotoVideoXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCPhotoVideoXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCPhotoVideoXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToPlayerIndicatorXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCPlayerIndicatorXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToSettingsXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCSettingsXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCSettingsXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)connectToSystemGestureXPCProxyServiceWithClient:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <GCSystemGestureXPCProxyServiceRemoteClientInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GCSystemGestureXPCProxyServiceRemoteServerInterface> *, NSError *, void*
- (void)enableFeature:(long long)arg1;
- (void)pingWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
