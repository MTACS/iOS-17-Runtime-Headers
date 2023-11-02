
@interface HMDAddAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)predicate;

- (bool)addPairingToAirPlayAccessory:(id)arg1 newPairingIdentity:(id)arg2 isOwner:(bool)arg3 error:(id*)arg4;
- (bool)addPairingToHAPAccessory:(id)arg1 newPairingIdentity:(id)arg2 permissions:(unsigned long long)arg3 error:(id*)arg4;
- (void)associateNewControllerKeyWithAccessory:(id)arg1 controllerKeyIdentifierToAssociate:(id)arg2 permissions:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)initWithAccessory:(id)arg1 newPairingIdentity:(id)arg2 asOwner:(bool)arg3 asAdmin:(bool)arg4 shouldUpdateKeyChainEntry:(bool)arg5;
- (id)initWithAccessory:(id)arg1 newPairingIdentity:(id)arg2 asOwner:(bool)arg3 asAdmin:(bool)arg4 shouldUpdateKeyChainEntry:(bool)arg5 userData:(id)arg6;
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 newPairingIdentity:(id)arg3 homeUUIDWhereAccessoryWasPaired:(id)arg4 asOwner:(bool)arg5 asAdmin:(bool)arg6 shouldUpdateKeyChainEntry:(bool)arg7 userData:(id)arg8;
- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;

@end
