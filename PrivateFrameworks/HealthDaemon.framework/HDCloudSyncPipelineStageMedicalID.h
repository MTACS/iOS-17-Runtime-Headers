
@interface HDCloudSyncPipelineStageMedicalID : HDCloudSyncPipelineStage {
    _HKMedicalIDData * _cloudMedicalIDData;
    _HKMedicalIDData * _localMedicalIDData;
    HDCloudSyncMedicalIDRecord * _medicalIDRecord;
}

- (void).cxx_destruct;
- (void)main;

@end
