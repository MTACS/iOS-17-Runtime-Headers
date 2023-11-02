
@interface MXSourceDataCacher : NSObject <MXSourceDataCacherProtocol> {
    <MXBundleUtilProtocol> * _bundleUtil;
    NSObject<OS_os_log> * _logHandle;
    <MXSourcePathUtilProtocol> * _sourcePathUtil;
    <MXStorageUtilProtocol> * _storageUtil;
}

@property (retain) <MXBundleUtilProtocol> *bundleUtil;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) <MXSourcePathUtilProtocol> *sourcePathUtil;
@property (retain) <MXStorageUtilProtocol> *storageUtil;

- (void).cxx_destruct;
- (id)bundleUtil;
- (id)initWithSourcePathUtil:(id)arg1 andStorageUtil:(id)arg2 andBundleUtil:(id)arg3;
- (id)logHandle;
- (bool)saveToSourceDirectoryWithDiagnosticSourcePayload:(id)arg1;
- (bool)saveToSourceDirectoryWithMetricSourcePayload:(id)arg1;
- (void)setBundleUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setSourcePathUtil:(id)arg1;
- (void)setStorageUtil:(id)arg1;
- (id)sourcePathUtil;
- (id)storageUtil;

@end
