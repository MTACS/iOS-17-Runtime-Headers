
@interface HDCloudSyncMedicalIDFetchOperation : HDCloudSyncOperation {
    _HKMedicalIDData * _cloudMedicalIDData;
    CKContainer * _container;
    HDCloudSyncMedicalIDRecord * _medicalIDRecord;
}

@property (nonatomic, readonly) _HKMedicalIDData *cloudMedicalIDData;
@property (nonatomic, readonly) HDCloudSyncMedicalIDRecord *medicalIDRecord;

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)cloudMedicalIDData;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 container:(id)arg3;
- (void)main;
- (id)medicalIDRecord;

@end
