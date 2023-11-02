
@interface PPQuickTypeConnectionsServant : NSObject <PPQuickTypeServantProtocol> {
    PPConnectionsMetricsTracker * _metricsTracker;
}

- (void).cxx_destruct;
- (id)init;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;

@end
