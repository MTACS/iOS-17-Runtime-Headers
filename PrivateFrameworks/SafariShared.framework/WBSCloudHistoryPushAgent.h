
@interface WBSCloudHistoryPushAgent : NSObject <NSXPCListenerDelegate, WBSCloudHistoryPushAgent> {
    APSConnection * _pushConnection;
    NSObject<OS_dispatch_queue> * _pushNotificationStateQueue;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasAcknowledgedPushNotifications;
- (bool)_hasUnacknowledgedPushNotifications;
- (id)_pushTopic;
- (void)_setHasAcknowlegedPushNotifications:(bool)arg1;
- (void)_setHasUnacknowledgedPushNotifications:(bool)arg1;
- (id)_userDefaults;
- (void)acknowledgePendingPushNotifications;
- (void)clearAcknowledgedPushNotifications;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)getPushNotifications:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)queryMemoryFootprint:(id /* block */)arg1;

@end
