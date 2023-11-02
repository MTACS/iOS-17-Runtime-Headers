
@interface CLLocationPushServiceExtensionRemoteContext : CLLocationPushServiceExtensionContext <CLLocationPushServiceExtensionRemoteXPCInterface>

- (void)didReceiveLocationPushPayload:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionWillTerminate;

@end
