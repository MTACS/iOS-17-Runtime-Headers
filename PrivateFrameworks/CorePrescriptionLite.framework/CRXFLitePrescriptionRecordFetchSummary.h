
@interface CRXFLitePrescriptionRecordFetchSummary : NSObject {
    unsigned long long  _asaKeyCount;
    unsigned long long  _calibrationDataDownloadFailureCount;
    NSError * _healthKitError;
    unsigned long long  _healthRecordCount;
    NSError * _keychainError;
    double  _meanCalibrationDataDownloadTime;
    double  _totalFetchTime;
}

@property (nonatomic, readonly) unsigned long long asaKeyCount;
@property (nonatomic, readonly) unsigned long long calibrationDataDownloadFailureCount;
@property (nonatomic, readonly) NSError *healthKitError;
@property (nonatomic, readonly) unsigned long long healthRecordCount;
@property (nonatomic, readonly) NSError *keychainError;
@property (nonatomic, readonly) double meanCalibrationDataDownloadTime;
@property (nonatomic, readonly) double totalFetchTime;

- (void).cxx_destruct;
- (unsigned long long)asaKeyCount;
- (unsigned long long)calibrationDataDownloadFailureCount;
- (id)healthKitError;
- (unsigned long long)healthRecordCount;
- (id)initWithHealthKitError:(id)arg1 keychainError:(id)arg2 healthRecordCount:(unsigned long long)arg3 asaKeyCount:(unsigned long long)arg4 calibrationDataDownloadFailureCount:(unsigned long long)arg5 meanCalibrationDataDownloadTime:(double)arg6 totalFetchTime:(double)arg7;
- (id)keychainError;
- (double)meanCalibrationDataDownloadTime;
- (double)totalFetchTime;

@end
