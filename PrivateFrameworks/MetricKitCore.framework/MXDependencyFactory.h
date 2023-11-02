
@interface MXDependencyFactory : NSObject {
    <MXBundleUtilProtocol> * _bundleUtil;
    MXCleanUtil * _cleanUtil;
    <MXClientUtilProtocol> * _clientUtil;
    MXDateUtil * _dateUtil;
    <MXDeliveryDataCacherProtocol> * _deliveryDataCacher;
    <MXDeliveryPathUtilProtocol> * _deliveryPathUtil;
    <MXDiagnosticServicesProtocol> * _diagnosticServices;
    <MXMetricServicesProtocol> * _metricServices;
    MXPayloadValidator * _payloadValidator;
    <MXSourceDataCacherProtocol> * _sourceDataCacher;
    <MXSourcePathUtilProtocol> * _sourcePathUtil;
    <MXStorageUtilProtocol> * _storageUtil;
}

@property (readonly) <MXBundleUtilProtocol> *bundleUtil;
@property (readonly) MXCleanUtil *cleanUtil;
@property (readonly) <MXClientUtilProtocol> *clientUtil;
@property (readonly) MXDateUtil *dateUtil;
@property (readonly) <MXDeliveryDataCacherProtocol> *deliveryDataCacher;
@property (readonly) <MXDeliveryPathUtilProtocol> *deliveryPathUtil;
@property (readonly) <MXDiagnosticServicesProtocol> *diagnosticServices;
@property (readonly) <MXMetricServicesProtocol> *metricServices;
@property (readonly) MXPayloadValidator *payloadValidator;
@property (readonly) <MXSourceDataCacherProtocol> *sourceDataCacher;
@property (readonly) <MXSourcePathUtilProtocol> *sourcePathUtil;
@property (readonly) <MXStorageUtilProtocol> *storageUtil;

+ (id)shared;

- (void).cxx_destruct;
- (void)_initIvar;
- (id)bundleUtil;
- (id)cleanUtil;
- (id)clientUtil;
- (id)dateUtil;
- (id)deliveryDataCacher;
- (id)deliveryPathUtil;
- (id)diagnosticServices;
- (id)handlerForMXCoreWithDelegate:(id)arg1;
- (id)handlerForMXSourceWithDelegate:(id)arg1;
- (id)init;
- (id)metricServices;
- (id)payloadValidator;
- (id)sourceDataCacher;
- (id)sourcePathUtil;
- (id)storageUtil;

@end
