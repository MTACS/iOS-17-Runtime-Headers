
@interface WiFiP2PUIAgent : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter * _notificationCenter;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)addNotificationRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)configureNotificationsWithBundleIdentifier:(id)arg1;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (void)invalidate;
- (void)removeNotificationsWithIdentifiers:(id)arg1;
- (void)showInfrastructureDisconnectOnRetroModeNotificationForService:(id)arg1 localization:(id)arg2 phoneDisconnected:(bool)arg3 uuid:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;

@end
