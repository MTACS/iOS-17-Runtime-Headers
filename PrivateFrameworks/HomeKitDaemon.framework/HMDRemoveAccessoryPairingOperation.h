
@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *pairingIdentifierToRemove;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)predicate;

- (id)initWithAccessory:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 isOwnerIdentity:(bool)arg4 identityToRemove:(id)arg5 userData:(id)arg6;
- (id)initWithAccessory:(id)arg1 isOwnerIdentity:(bool)arg2 identityToRemove:(id)arg3;
- (id)initWithAccessory:(id)arg1 isOwnerIdentity:(bool)arg2 identityToRemove:(id)arg3 userData:(id)arg4;
- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;
- (id)pairingIdentifierToRemove;

@end
