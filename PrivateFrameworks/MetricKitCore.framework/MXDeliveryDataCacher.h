
@interface MXDeliveryDataCacher : NSObject <MXDeliveryDataCacherProtocol> {
    <MXClientUtilProtocol> * _clientUtil;
    <MXDeliveryPathUtilProtocol> * _deliveryPathUtil;
    NSObject<OS_os_log> * _logHandle;
    <MXStorageUtilProtocol> * _storageUtil;
}

@property (retain) <MXClientUtilProtocol> *clientUtil;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <MXDeliveryPathUtilProtocol> *deliveryPathUtil;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) <MXStorageUtilProtocol> *storageUtil;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_diagnosticsFromFilepaths:(id)arg1;
- (id)_metricsFromFilepaths:(id)arg1;
- (bool)_writeDiagnosticReport:(id)arg1 atAppContainerPath:(id)arg2 forClient:(id)arg3 withError:(id*)arg4;
- (bool)_writeMetricReport:(id)arg1 atAppContainerPath:(id)arg2 forClient:(id)arg3 withError:(id*)arg4;
- (id)clientUtil;
- (id)deliveryPathUtil;
- (id)diagnosticsForClient:(id)arg1;
- (id)initWithClientUtil:(id)arg1 andDeliveryPathUtil:(id)arg2 andStorageUtil:(id)arg3;
- (id)logHandle;
- (id)metricsForClient:(id)arg1;
- (void)notifyDataAvailableForDelivery;
- (bool)saveDiagnostic:(id)arg1 toDeliveryDirectoryForBundleID:(id)arg2;
- (bool)saveMetrics:(id)arg1 toDeliveryDirectoryForBundleID:(id)arg2;
- (void)setClientUtil:(id)arg1;
- (void)setDeliveryPathUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setStorageUtil:(id)arg1;
- (id)storageUtil;
- (bool)writeDiagnosticReport:(id)arg1 atAppContainerPath:(id)arg2 forClient:(id)arg3 withError:(id*)arg4;
- (bool)writeMetricReport:(id)arg1 atAppContainerPath:(id)arg2 forClient:(id)arg3 withError:(id*)arg4;

@end
