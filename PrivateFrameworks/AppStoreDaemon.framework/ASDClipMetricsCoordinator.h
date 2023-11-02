
@interface ASDClipMetricsCoordinator : NSObject {
    <ASDClipServiceBroker> * _broker;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendClipCardMetricsEvent:(id)arg1 completionHandler:(id /* block */)arg2;

@end
