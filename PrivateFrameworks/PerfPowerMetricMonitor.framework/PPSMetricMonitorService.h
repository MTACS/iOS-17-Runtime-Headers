
@interface PPSMetricMonitorService : NSObject <NSXPCListenerDelegate, PPSMetricMonitorServiceInterface> {
    NSMutableDictionary * _clients;
    <PPSMetricMonitorServiceDelegate> * _delegate;
}

@property (retain) NSMutableDictionary *clients;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PPSMetricMonitorServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canStartMonitoringForClient:(id)arg1;
- (void)_handleConnectionEndedWithClient:(id)arg1;
- (id)clients;
- (id)delegate;
- (void)endWithError:(id)arg1;
- (void)finishMonitoringAndSendMetrics;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClients:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUpWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringProcessWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringProcessWithPID:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringSystemMetricsWithCompletion:(id /* block */)arg1;
- (void)startXPCListener;
- (void)updateWithMetrics:(id)arg1;

@end
