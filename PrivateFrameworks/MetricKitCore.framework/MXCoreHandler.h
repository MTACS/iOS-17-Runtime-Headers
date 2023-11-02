
@interface MXCoreHandler : NSObject {
    <MXClientUtilProtocol> * _clientUtil;
    <MXCoreHandlerDelegate> * _delegate;
    <MXDeliveryDataCacherProtocol> * _deliveryDataCacher;
    <MXDeliveryPathUtilProtocol> * _deliveryPathUtil;
    NSObject<OS_os_log> * _logHandle;
    <MXMetricServicesProtocol> * _metricServices;
}

@property (retain) <MXClientUtilProtocol> *clientUtil;
@property <MXCoreHandlerDelegate> *delegate;
@property (retain) <MXDeliveryDataCacherProtocol> *deliveryDataCacher;
@property (retain) <MXDeliveryPathUtilProtocol> *deliveryPathUtil;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly, retain) <MXMetricServicesProtocol> *metricServices;

- (void).cxx_destruct;
- (void)_handleClientAvailability;
- (void)_processDataActivity;
- (void)_reportMetricKitUsage;
- (unsigned long long)_successCountFromSavingMetricPayloadsToDeliveryDirectoryForClientMetrics:(id)arg1;
- (void)_updateClientAvailabilityAndPrepareDataActivityForBundleID:(id)arg1;
- (id)clientUtil;
- (id)delegate;
- (id)deliveryDataCacher;
- (id)deliveryPathUtil;
- (id)diagnosticsForBundleID:(id)arg1;
- (id)initWithClientUtil:(id)arg1 andDeliveryDataCacher:(id)arg2 andDeliveryPathUtil:(id)arg3 andMetricServices:(id)arg4 andDelegate:(id)arg5;
- (id)logHandle;
- (id)metricServices;
- (id)metricsForBundleID:(id)arg1;
- (void)performDataActivity;
- (void)registerClientAndTeamForBundleID:(id)arg1 andTeamID:(id)arg2;
- (void)registerClientForBundleID:(id)arg1;
- (void)saveMetricPayloadsToDeliveryDirectoryAndReportSuccessForClientMetrics:(id)arg1;
- (void)setClientUtil:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeliveryDataCacher:(id)arg1;
- (void)setDeliveryPathUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (bool)shouldDeliverDataForBundleID:(id)arg1;
- (bool)shouldDeliverDataForBundleID:(id)arg1 andTeamID:(id)arg2;

@end
