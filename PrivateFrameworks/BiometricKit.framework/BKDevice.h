
@interface BKDevice : NSObject <BiometricKitDelegateXpcProtocol, BiometricKitXPCClientDelegate> {
    <BKDeviceDelegate> * _delegate;
    BKDeviceDescriptor * _descriptor;
    NSObject<OS_dispatch_queue> * _queue;
    BiometricKitXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BKDeviceDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (bool)biometryAvailabilityInfo:(long long*)arg1 fromDeviceInfo:(long long)arg2 error:(id*)arg3;
+ (bool)deviceAvailableWithFailure:(bool*)arg1;
+ (id)deviceWithDescriptor:(id)arg1 error:(id*)arg2;
+ (bool)extendedLockoutState:(long long*)arg1 fromDeviceLockoutState:(long long)arg2 error:(id*)arg3;
+ (bool)lockoutState:(long long*)arg1 fromDeviceLockoutState:(long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)accessoriesWithError:(id*)arg1;
- (id)accessoryGroupsWithError:(id*)arg1;
- (bool)bioLockoutState:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (bool)biometryAvailability:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (id)connectedAccessoriesWithError:(id*)arg1;
- (void)connectionInterrupted;
- (id)createEnrollOperationWithError:(id*)arg1;
- (id)createMatchOperationWithError:(id*)arg1;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)descriptor;
- (bool)deviceHardwareState:(unsigned long long*)arg1 error:(id*)arg2;
- (id)dispatchQueue;
- (bool)dropAllUnlockTokensWithError:(id*)arg1;
- (id)effectiveProtectedConfigurationForUser:(unsigned int)arg1 error:(id*)arg2;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (bool)expressModeState:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (bool)extendedBioLockoutState:(long long*)arg1 forUser:(unsigned int)arg2 error:(id*)arg3;
- (bool)forceBioLockoutForAllUsersWithError:(id*)arg1;
- (bool)forceBioLockoutForUser:(unsigned int)arg1 error:(id*)arg2;
- (bool)forceBioLockoutIfLockedForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)freeIdentityCountForUser:(unsigned int)arg1 accessoryGroup:(id)arg2 error:(id*)arg3;
- (id)freeIdentityCountForUser:(unsigned int)arg1 error:(id*)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (id)identitiesDatabaseHashForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)identitiesDatabaseUUIDForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)identitiesForUser:(unsigned int)arg1 accessoryGroup:(id)arg2 error:(id*)arg3;
- (id)identitiesForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)identitiesWithError:(id*)arg1;
- (id)identityForUUID:(id)arg1 error:(id*)arg2;
- (bool)isDelegate;
- (id)lastMatchEventWithError:(id*)arg1;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (id)maxIdentityCountWithError:(id*)arg1;
- (id)protectedConfigurationForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)queue;
- (void)removeAllIdentitiesForUser:(unsigned int)arg1 async:(bool)arg2 reply:(id /* block */)arg3;
- (bool)removeAllIdentitiesForUser:(unsigned int)arg1 error:(id*)arg2;
- (void)removeAllIdentitiesForUser:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)removeIdentity:(id)arg1 async:(bool)arg2 reply:(id /* block */)arg3;
- (bool)removeIdentity:(id)arg1 error:(id*)arg2;
- (void)removeIdentity:(id)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 async:(bool)arg4 reply:(id /* block */)arg5;
- (bool)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 error:(id*)arg4;
- (void)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 credentialSet:(id)arg3 reply:(id /* block */)arg4;
- (void)setQueue:(id)arg1;
- (void)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 async:(bool)arg3 reply:(id /* block */)arg4;
- (bool)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id*)arg3;
- (void)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 reply:(id /* block */)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (id)systemProtectedConfigurationWithError:(id*)arg1;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(bool)arg1 client:(unsigned long long)arg2;
- (void)updateIdentity:(id)arg1 async:(bool)arg2 reply:(id /* block */)arg3;
- (bool)updateIdentity:(id)arg1 error:(id*)arg2;
- (void)updateIdentity:(id)arg1 reply:(id /* block */)arg2;

@end
