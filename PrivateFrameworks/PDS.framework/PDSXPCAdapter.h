
@interface PDSXPCAdapter : NSObject <PDSXPCConnectionVendor, PDSXPCInterfaceVendor, PDSXPCListenerVendor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PDS.framework/PDS

+ (id)_sharedInstance;
+ (id)defaultConnectionVendor;
+ (id)defaultInterfaceVendor;
+ (bool)disableXPC;
+ (void)setDisableXPC:(bool)arg1;

- (id)_init;
- (id)connectionForMachService:(id)arg1;
- (id)interfaceWithProtocol:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent

+ (id)defaultListenerVendor;

- (id)listenerForMachService:(id)arg1;

@end
