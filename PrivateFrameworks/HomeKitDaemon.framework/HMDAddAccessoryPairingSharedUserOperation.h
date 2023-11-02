
@interface HMDAddAccessoryPairingSharedUserOperation : HMDAddAccessoryPairingOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)attributeDescriptions;
- (id)initWithAccessory:(id)arg1 forSharedUser:(id)arg2 sharedUserPairingIdentity:(id)arg3 asOwner:(bool)arg4 asSharedAdmin:(bool)arg5;
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 forSharedUser:(id)arg3 sharedUserPairingIdentity:(id)arg4 asOwner:(bool)arg5 asSharedAdmin:(bool)arg6 homeUUIDWhereAccessoryWasPaired:(id)arg7;
- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;

@end
