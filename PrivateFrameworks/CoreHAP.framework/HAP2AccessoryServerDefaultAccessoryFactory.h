
@interface HAP2AccessoryServerDefaultAccessoryFactory : NSObject <HAP2AccessoryServerAccessoryFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)accessoryWithAccessoryServer:(id)arg1 instanceID:(unsigned long long)arg2 discoveredServices:(id)arg3;

@end
