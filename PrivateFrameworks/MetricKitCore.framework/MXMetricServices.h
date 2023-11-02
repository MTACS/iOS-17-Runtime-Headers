
@interface MXMetricServices : NSObject <MXMetricServicesProtocol> {
    <MXClientUtilProtocol> * _clientUtil;
    NSObject<OS_os_log> * _logHandle;
    NSMutableSet * _services;
    <MXSourcePathUtilProtocol> * _sourcePathUtil;
}

@property (retain) <MXClientUtilProtocol> *clientUtil;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly, retain) NSMutableSet *services;
@property (retain) <MXSourcePathUtilProtocol> *sourcePathUtil;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanServiceMetricsDirectories;
- (id)_clientMetricsFromServices;
- (void)_createServices;
- (bool)_isMetricSourceDataAvailable;
- (id)_metricPayloadsForClient:(id)arg1;
- (id)_metricsFromServicesForClient:(id)arg1;
- (void)_startServices;
- (void)_stopServices;
- (id)clientMetricPayloadsForAllClients;
- (id)clientUtil;
- (id)initWithClientUtil:(id)arg1 andSourcePathUtil:(id)arg2;
- (id)logHandle;
- (id)services;
- (void)setClientUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setSourcePathUtil:(id)arg1;
- (id)sourcePathUtil;

@end
