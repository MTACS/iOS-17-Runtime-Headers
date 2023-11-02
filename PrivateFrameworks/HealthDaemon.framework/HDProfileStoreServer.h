
@interface HDProfileStoreServer : HDStandardTaskServer <HDProfileManagerObserver, HKProfileStoreServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void)dealloc;
- (id)exportedInterface;
- (void)profileListDidChange;
- (id)remoteInterface;
- (void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_deleteProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchDisplayImageData:(id /* block */)arg1;
- (void)remote_fetchDisplayNameWithCompletion:(id /* block */)arg1;
- (void)remote_fetchSharingInformationForProfileIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_getAllProfilesWithCompletion:(id /* block */)arg1;
- (void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 ownerAppleID:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setDisplayImageData:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_startObservingWithCompletion:(id /* block */)arg1;

@end
