
@interface WFTrafficEngManager : NSObject {
    bool  _configured;
    RPCompanionLinkClient * _discoveryClient;
    <WFTrafficEngDelegate> * _trafficEngDelegate;
    NSObject<OS_dispatch_queue> * _traffic_engr_queue;
}

@property (nonatomic) <WFTrafficEngDelegate> *trafficEngDelegate;

- (void).cxx_destruct;
- (void)__activateDiscovery;
- (id)__collectCriticalAppInfo;
- (bool)__configureRapportDiscoveryClient;
- (void)__configureRapportSessionClient:(id)arg1;
- (void)__invalidateDiscovery;
- (void)__invalidateSession;
- (void)__registerCallbacksAndActivate;
- (void)__registerRequestHandler;
- (void)__requestCriticalAppInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)__sendEventToPeers;
- (void)__sendKeepAliveEvent:(id)arg1 dictionary:(id)arg2;
- (void)__sendPeriodicEvent:(id)arg1;
- (void)__tearDownRapportDataSession;
- (void)cleanup;
- (void)dealloc;
- (id)initWithTrafficEngDelegate:(id)arg1;
- (void)setTrafficEngDelegate:(id)arg1;
- (id)trafficEngDelegate;

@end
