
@interface CHSensorDataClient : NSObject <CHSensorDataProtocol> {
    CHXPCClientHelper * _clientHelper;
}

- (void).cxx_destruct;
- (void)aggregatedMotionAndAppLaunchDataFromDate:(id)arg1 toDate:(id)arg2 completion:(id /* block */)arg3;
- (void)embeddingVectorForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
