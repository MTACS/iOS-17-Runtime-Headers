
@interface __HMDHomeAdministratorDynamicRelay : __HMDHomeAdministratorReceiver

+ (id)logCategory;

- (void)__handleRemoteMessage:(id)arg1;
- (void)__handleXPCMessage:(id)arg1;
- (void)registerForMessage:(id)arg1 policies:(id)arg2;

@end
