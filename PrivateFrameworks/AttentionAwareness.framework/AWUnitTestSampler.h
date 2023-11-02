
@interface AWUnitTestSampler : NSObject <AWUnitTestSampler> {
    NSObject<OS_dispatch_queue> * _queue;
    <NSXPCProxyCreating> * _remoteSamplerProxy;
}

+ (id)sharedSampler;

- (void).cxx_destruct;
- (id)AVFoundationSession;
- (id)_connect;
- (id)connect;
- (void)getStatsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)invokeSampler:(id /* block */)arg1;
- (void)resetStats;
- (void)setCarPlayConnected:(bool)arg1;
- (void)setCarPlayConnected:(bool)arg1 reply:(id /* block */)arg2;
- (void)setCarplayStateChangedCallback:(id /* block */)arg1;
- (void)setDisplayCallback:(id /* block */)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setDisplayState:(bool)arg1 reply:(id /* block */)arg2;
- (void)setPearlErrorState:(bool)arg1;
- (void)setPearlErrorState:(bool)arg1 reply:(id /* block */)arg2;
- (void)setSampleState:(bool)arg1;
- (void)setSampleState:(bool)arg1 deliverEvent:(bool)arg2;
- (void)setSampleState:(bool)arg1 deliverEvent:(bool)arg2 reply:(id /* block */)arg3;
- (void)setSampleState:(bool)arg1 reply:(id /* block */)arg2;
- (void)setSmartCoverCallback:(id /* block */)arg1;
- (void)setSmartCoverClosed:(bool)arg1;
- (void)setSmartCoverClosed:(bool)arg1 reply:(id /* block */)arg2;

@end
