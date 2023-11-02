
@interface HMDRemoveAccessoryPairingSharedUserOperation : HMDRemoveAccessoryPairingOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)initWithAccessory:(id)arg1 isOwnerIdentity:(bool)arg2 sharedUser:(id)arg3;
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 isOwnerIdentity:(bool)arg3 forSharedUser:(id)arg4 sharedUserPairingIdentity:(id)arg5 homeUUIDWhereAccessoryWasPaired:(id)arg6;
- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;

@end
