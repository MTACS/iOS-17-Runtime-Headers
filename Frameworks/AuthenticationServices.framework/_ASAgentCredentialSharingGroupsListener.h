
@interface _ASAgentCredentialSharingGroupsListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    ASCredentialSharingGroupsNotificationManager * _notificationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
