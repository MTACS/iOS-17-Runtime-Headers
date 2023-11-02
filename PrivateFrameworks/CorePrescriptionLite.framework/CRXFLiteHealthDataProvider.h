
@interface CRXFLiteHealthDataProvider : NSObject {
    NSString * _deviceModel;
    HKHealthStore * _healthStore;
    NSObject<OS_os_log> * _log;
    NSPredicate * _samplePredicate;
    HKSampleType * _sampleType;
    NSArray * _sortDescriptors;
}

- (void).cxx_destruct;
- (void)fetchHealthRecordsWithCompletion:(id /* block */)arg1;
- (void)getSyncTimesWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDeviceModel:(id)arg1;
- (bool)isCloudSyncDisabledError:(id)arg1;

@end
