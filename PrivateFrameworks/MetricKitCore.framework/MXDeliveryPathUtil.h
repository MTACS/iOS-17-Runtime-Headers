
@interface MXDeliveryPathUtil : NSObject <MXDeliveryPathUtilProtocol> {
    <MXBundleUtilProtocol> * _bundleUtil;
    NSObject<OS_os_log> * _logHandle;
    <MXStorageUtilProtocol> * _storageUtil;
}

@property (retain) <MXBundleUtilProtocol> *bundleUtil;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) <MXStorageUtilProtocol> *storageUtil;

- (void).cxx_destruct;
- (id)_applicationContainerPath;
- (bool)_createDiagnosticDirectoryForDeliveryAtPath:(id)arg1 forClient:(id)arg2 withError:(id*)arg3;
- (bool)_createMetricDirectoryForDeliveryAtPath:(id)arg1 forClient:(id)arg2 withError:(id*)arg3;
- (id)_diagnosticDeliveryDirectoryForAppContainerPath:(id)arg1 forClient:(id)arg2;
- (id)_filepathsFromDirectory:(id)arg1 withError:(id*)arg2;
- (id)_metricDeliveryDirectoryForAppContainerPath:(id)arg1 forClient:(id)arg2;
- (void)_protectDiagnosticUntilFirstUserAuthForPath:(id)arg1 forClient:(id)arg2 withError:(id*)arg3;
- (void)_protectMetricUntilFirstUserAuthForPath:(id)arg1 withError:(id*)arg2;
- (id)applicationContainerPath;
- (id)applicationContainerPathForBundleID:(id)arg1;
- (id)bundleUtil;
- (bool)createDiagnosticDirectoryAtPath:(id)arg1 forClient:(id)arg2 withError:(id*)arg3;
- (bool)createMetricDirectoryAtPath:(id)arg1 forClient:(id)arg2 withError:(id*)arg3;
- (id)diagnosticReportFilepathsFromClient:(id)arg1 withError:(id*)arg2;
- (id)filepathOfDiagnosticForDeliveryFromAppContainerPath:(id)arg1 forClient:(id)arg2 atDate:(id)arg3;
- (id)filepathOfMetricForDeliveryFromAppContainerPath:(id)arg1 forClient:(id)arg2 atDate:(id)arg3;
- (id)initWithStorageUtil:(id)arg1 andBundleUtil:(id)arg2;
- (id)logHandle;
- (id)metricReportFilepathsFromClient:(id)arg1 withError:(id*)arg2;
- (void)setBundleUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setStorageUtil:(id)arg1;
- (id)storageUtil;

@end
