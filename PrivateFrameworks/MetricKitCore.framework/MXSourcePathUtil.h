
@interface MXSourcePathUtil : NSObject <MXSourcePathUtilProtocol> {
    MXDateUtil * _dateUtil;
    NSObject<OS_os_log> * _logHandle;
    <MXStorageUtilProtocol> * _storageUtil;
}

@property (retain) MXDateUtil *dateUtil;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) <MXStorageUtilProtocol> *storageUtil;

- (void).cxx_destruct;
- (id)_filePathOfDiagnosticSourcePayloadForDate:(id)arg1 andSourceDirectory:(id)arg2;
- (id)_filePathOfMetricSourcePayloadForDate:(id)arg1 andSourceDirectory:(id)arg2;
- (void)_removeFilesForSourceID:(long long)arg1;
- (void)_removeFilesForSourceID:(long long)arg1 andClient:(id)arg2;
- (id)_setupSourceDirectoryForSourceID:(long long)arg1 andBundleID:(id)arg2;
- (id)_sourceDirectoryForSource:(long long)arg1 andBundleID:(id)arg2;
- (void)cleanDataDirectoryForSource:(long long)arg1;
- (void)cleanDiagnosticsDirectoryForSource:(long long)arg1 andClient:(id)arg2;
- (id)dateUtil;
- (id)filePathOfDiagnosticSourcePayloadForSourceID:(long long)arg1 andBundleID:(id)arg2 andDate:(id)arg3;
- (id)filePathOfMetricSourcePayloadForSourceID:(long long)arg1 andBundleID:(id)arg2 andDate:(id)arg3;
- (id)initWithDateUtil:(id)arg1 andStorageUtil:(id)arg2;
- (id)logHandle;
- (void)removeDeliveredDiagnosticsForSourceID:(long long)arg1 forDate:(id)arg2;
- (void)setDateUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setStorageUtil:(id)arg1;
- (id)storageUtil;

@end
