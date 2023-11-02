
@interface HDCloudSyncMedicalIDPersistOperation : HDCloudSyncSynchronousOperation {
    _HKMedicalIDData * _medicalIDDataToPersist;
}

@property (nonatomic, retain) _HKMedicalIDData *medicalIDDataToPersist;

- (void).cxx_destruct;
- (id)medicalIDDataToPersist;
- (bool)performWithError:(id*)arg1;
- (void)setMedicalIDDataToPersist:(id)arg1;

@end
