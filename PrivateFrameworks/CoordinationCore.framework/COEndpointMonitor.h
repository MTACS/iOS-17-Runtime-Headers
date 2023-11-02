
@interface COEndpointMonitor : NSObject {
    unsigned long long  _activeEndpointCount;
    RPCompanionLinkClient * _client;
    <COEndpointMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property <COEndpointMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_activateLink;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startMonitoring;

@end
