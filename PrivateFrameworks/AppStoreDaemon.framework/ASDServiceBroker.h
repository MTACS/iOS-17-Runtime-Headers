
@interface ASDServiceBroker : NSObject <ASDClipServiceBroker> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _machServiceName;
    int  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultBroker;
+ (id)interface;
+ (id)newBrokerForMachServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getAppMetricsServiceWithCompletionHandler:(id /* block */)arg1;
- (void)getAppStoreServiceWithCompletionHandler:(id /* block */)arg1;
- (void)getClipServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getClipServiceWithError:(id*)arg1;
- (void)getCrossfireServiceWithCompletionHandler:(id /* block */)arg1;
- (void)getDiagnosticServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getDiagnosticServiceWithError:(id*)arg1;
- (id)getFairPlayServiceWithError:(id*)arg1;
- (void)getIAPHistoryServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getIAPHistoryServiceWithError:(id*)arg1;
- (void)getInstallAttributionServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getInstallAttributionServiceWithError:(id*)arg1;
- (void)getInstallWebAttributionServiceWithCompletionHandler:(id /* block */)arg1;
- (void)getInstallationServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getInstallationServiceWithError:(id*)arg1;
- (void)getLibraryServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getLibraryServiceWithError:(id*)arg1;
- (void)getManagedAppServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getManagedAppServiceWithError:(id*)arg1;
- (void)getOcelotServiceWithCompletionHandler:(id /* block */)arg1;
- (void)getPersonalizationServiceWithCompletionHandler:(id /* block */)arg1;
- (void)getPurchaseHistoryServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getPurchaseHistoryServiceWithError:(id*)arg1;
- (void)getPurchaseServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getPurchaseServiceWithError:(id*)arg1;
- (void)getRepairServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getRepairServiceWithError:(id*)arg1;
- (void)getRestoreServiceWithCompletionHandler:(id /* block */)arg1;
- (void)getSkannerServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getStoreKitExternalNotificationServiceWithError:(id*)arg1;
- (void)getTestFlightFeedbackServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getTestFlightFeedbackServiceWithError:(id*)arg1;
- (void)getUpdatesServiceWithCompletionHandler:(id /* block */)arg1;
- (id)getUpdatesServiceWithError:(id*)arg1;
- (id)initWithMachServiceName:(id)arg1;

@end
