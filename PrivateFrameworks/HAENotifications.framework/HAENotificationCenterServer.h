
@interface HAENotificationCenterServer : NSObject <HAENotificationCenterDelegate, NSXPCListenerDelegate> {
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addHAENotificationEvent:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)verifyInvariants;

@end
