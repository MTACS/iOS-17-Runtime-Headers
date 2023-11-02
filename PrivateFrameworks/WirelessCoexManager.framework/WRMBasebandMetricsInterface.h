
@interface WRMBasebandMetricsInterface : WRMClientInterface {
    id /* block */  dataMetricsHandler;
    id /* block */  metricsHandler;
    id /* block */  wifiMetricsHandler;
}

- (void).cxx_destruct;
- (void)getCellularDataMetrics:(id /* block */)arg1;
- (void)getNRPhyMetrics:(id /* block */)arg1;
- (void)getQSHMetrics:(id /* block */)arg1;
- (void)getWiFiBWEstimationMetrics:(id /* block */)arg1;
- (void)handleNotification:(id)arg1 :(bool)arg2;
- (id)init;
- (void)processWRMCellDataMetrics:(id)arg1;
- (void)processWRMNrPhyMetrics:(id)arg1;
- (void)processWRMWiFiBWEstMetrics:(id)arg1;
- (void)reConnect;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)unregisterClient;

@end
