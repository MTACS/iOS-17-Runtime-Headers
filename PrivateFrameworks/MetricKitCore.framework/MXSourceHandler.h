
@interface MXSourceHandler : NSObject {
    <MXBundleUtilProtocol> * _bundleUtil;
    <MXSourceHandlerDelegate> * _delegate;
    <MXDeliveryDataCacherProtocol> * _deliveryDataCacher;
    <MXDiagnosticServicesProtocol> * _diagnosticServices;
    NSObject<OS_os_log> * _logHandle;
    <MXSourceDataCacherProtocol> * _sourceDataCacher;
    <MXSourcePathUtilProtocol> * _sourcePathUtil;
}

@property (retain) <MXBundleUtilProtocol> *bundleUtil;
@property <MXSourceHandlerDelegate> *delegate;
@property (retain) <MXDeliveryDataCacherProtocol> *deliveryDataCacher;
@property (readonly, retain) <MXDiagnosticServicesProtocol> *diagnosticServices;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) <MXSourceDataCacherProtocol> *sourceDataCacher;
@property (retain) <MXSourcePathUtilProtocol> *sourcePathUtil;

- (void).cxx_destruct;
- (void)_removeDeliveredPayloadForSourceID:(long long)arg1 atDate:(id)arg2;
- (id)bundleUtil;
- (void)cleanServiceDiagnosticsDirectoriesForClient:(id)arg1;
- (id)delegate;
- (id)deliveryDataCacher;
- (id)diagnosticServices;
- (void)handleDiagnosticDataWithPayload:(id)arg1;
- (void)handleMetricDataWithPayload:(id)arg1;
- (id)initWithSourceDataCacher:(id)arg1 andDeliveryDataCacher:(id)arg2 andSourcePathUtil:(id)arg3 andBundleUtil:(id)arg4 andDiagnosticServices:(id)arg5 andDelegate:(id)arg6;
- (id)logHandle;
- (void)setBundleUtil:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeliveryDataCacher:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setSourceDataCacher:(id)arg1;
- (void)setSourcePathUtil:(id)arg1;
- (id)sourceDataCacher;
- (id)sourcePathUtil;
- (bool)writeDiagnosticReport:(id)arg1 atAppContainerPath:(id)arg2 forClient:(id)arg3 withError:(id*)arg4;

@end
