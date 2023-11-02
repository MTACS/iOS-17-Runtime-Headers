
@interface RemoteNetworkQualityAssessment : NSObject {
    id /* block */  completionHandler;
    NetworkQualityConfiguration * config;
    NSObject<OS_dispatch_queue> * dispatchQueue;
}

- (void).cxx_destruct;
- (void)getAvailableServersForDevice:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)rapportDiscoveryCompletionWithClient:(id)arg1 deviceName:(id)arg2;
- (void)rapportDiscoveryCompletionWithClient:(id)arg1 deviceName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)rapportInvokeCompletionWithClient:(id)arg1 deviceIdentifier:(id)arg2;
- (void)rapportQueryCompletionWithClient:(id)arg1 deviceIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)runAgainst:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
