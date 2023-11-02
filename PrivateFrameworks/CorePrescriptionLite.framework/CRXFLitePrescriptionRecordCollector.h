
@interface CRXFLitePrescriptionRecordCollector : NSObject {
    CRXFAppClipCodeTranscoder * _accTranscoder;
    CRXFCalibrationDataDownloader * _calibrationDataDownloader;
    CRXFLiteHealthDataProvider * _healthDataProvider;
    CRXFKeychainAccess * _keychainAccess;
    NSObject<OS_os_log> * _log;
    CRXUDispatchQueue * _serialQueue;
}

- (void).cxx_destruct;
- (void)fetchPrescriptionRecordsWithCompletion:(id /* block */)arg1;
- (id)initWithDeviceModel:(id)arg1 timeout:(double)arg2;
- (id)initWithTimeout:(double)arg1;
- (id)prescriptionRecordWithEnrollmentName:(id)arg1 enrollmentDate:(id)arg2 accPayload:(id)arg3 leftCalibrationData:(id)arg4 rightCalibrationData:(id)arg5;

@end
