
@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchAllShareParticipantEmailAddressesForSharingType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchSharingParticipantStatus:(id /* block */)arg1;
- (void)remote_revokeAccessForAllShareParticipantsForSharingType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_tearDownHealthSharingForProfile:(id)arg1 completion:(id /* block */)arg2;

@end
