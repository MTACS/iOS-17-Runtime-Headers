
@interface DSListener : NSObject <DSListenerClientProtocol> {
    unsigned long long  _activeProviderLostCount;
    double  _avgListenerStartInterval;
    DSCoreAnalyticsEventHandler * _caEventHandler;
    DSProviderDevice * _currentProvider;
    RPCompanionLinkClient * _discoveryClient;
    int  _firstSubscriptionDataLinkType;
    bool  _isFirstSubscription;
    bool  _isStopCalled;
    bool  _isSubscriptionActive;
    bool  _isTestMode;
    unsigned int  _maxListenerClients;
    DSClientMotionDataOptions * _motionDataOptions;
    unsigned long long  _numHeartbeats;
    unsigned long long  _numMotionStateMessages;
    NSMutableDictionary * _providerDictionary;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSArray *activeProviders;
@property double avgListenerStartInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTestMode;
@property unsigned int maxListenerClients;
@property (nonatomic, retain) DSClientMotionDataOptions *motionDataOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFindDevice:(id)arg1;
- (void)_didLoseDevice:(id)arg1;
- (id)_findProviderWithIdentifier:(id)arg1;
- (void)_rapportReceivedDataRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_rapportReceivedHeartbeatRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_receivedData:(id)arg1 fromProvider:(id)arg2;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 device:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)_startCASessionMetricCollection;
- (void)_stopCASessionMetricCollection;
- (void)_stopListener;
- (void)_subscribeToMotionData;
- (void)_unsubscribeToMotionData;
- (void)_updateCurrentProvider:(id)arg1;
- (id)activeProviders;
- (double)avgListenerStartInterval;
- (void)failedToStartListenerWithError:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (bool)isTestMode;
- (unsigned int)maxListenerClients;
- (id)motionDataOptions;
- (void)receivedData:(id)arg1 fromProvider:(id)arg2;
- (void)setAvgListenerStartInterval:(double)arg1;
- (void)setIsTestMode:(bool)arg1;
- (void)setMaxListenerClients:(unsigned int)arg1;
- (void)setMotionDataOptions:(id)arg1;
- (void)startMotionDataListenerWithOptions:(id)arg1;
- (void)startedListener;
- (void)stopMotionDataListener;
- (void)stoppedListener;
- (void)updateProviders:(id)arg1;

@end
