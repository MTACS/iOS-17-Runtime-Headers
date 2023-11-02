
@protocol HKMedicalIDStoreServerInterface <NSObject>

@required

- (void)remote_addEmergencyContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKEmergencyContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKMedicalIDData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKMedicalIDData *, NSError *, void*
- (void)remote_fetchMedicalIDWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKMedicalIDData *, NSError *, void*
- (void)remote_medicalIDClinicalContactsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_medicalIDEmergencyContactsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_removeEmergencyContact:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKEmergencyContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_updateMedicalIDData:(void *)arg1 lastFetchedMedicalIDData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _HKMedicalIDData *, _HKMedicalIDData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
