
@interface HDMedicalIDStoreTaskServer : HDStandardTaskServer <HKMedicalIDStoreServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateClient:(id)arg1 error:(id*)arg2;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_addEmergencyContact:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id /* block */)arg1;
- (void)remote_fetchMedicalIDWithCompletion:(id /* block */)arg1;
- (void)remote_medicalIDClinicalContactsWithCompletion:(id /* block */)arg1;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (void)remote_removeEmergencyContact:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_updateMedicalIDData:(id)arg1 lastFetchedMedicalIDData:(id)arg2 completion:(id /* block */)arg3;

@end
