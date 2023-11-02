
@interface DSProvider : NSObject <DSProviderClientProtocol> {
    DSCoreAnalyticsEventHandler * _caEventHandler;
    NSObject<OS_dispatch_queue> * _clientQueue;
    DSListenerDevice * _currentListener;
    NSObject<OS_dispatch_source> * _heartbeatTimer;
    bool  _isLinkClientResponsePending;
    bool  _isPendingHeartbeat;
    bool  _isScreenON;
    bool  _isSubscriptionActive;
    bool  _isTestMode;
    bool  _isUnterminatedSession;
    RPCompanionLinkClient * _linkClient;
    int  _linkType;
    DSClientMotionDataOptions * _motionDataOptions;
    unsigned long long  _numHeartbeats;
    unsigned long long  _numMotionStateMessages;
    NSObject<OS_dispatch_source> * _responseTimeoutTimer;
    int  _screenStateToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isSubscriptionActive;
@property (nonatomic) bool isTestMode;
@property (nonatomic, retain) DSClientMotionDataOptions *motionDataOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addNewListener:(id)arg1;
- (void)_didFindDevice:(id)arg1;
- (void)_didLoseDevice:(id)arg1;
- (void)_fetchScreenState;
- (void)_heartBeatWithListener;
- (bool)_persistListenerState;
- (void)_receivedDataRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_removeCurrentListenerWithStopReason:(int)arg1;
- (bool)_removePersistedState;
- (void)_sendMotionData:(id)arg1;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 device:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)_startCASessionMetricCollection;
- (void)_stopCASessionMetricCollectionWithStopReason:(int)arg1;
- (void)_stopProvider;
- (bool)_unPersistListenerState;
- (void)failedToStartProviderWithOptions:(id)arg1 error:(id)arg2;
- (id)initWithDispatchQueue:(id)arg1;
- (bool)isSubscriptionActive;
- (bool)isTestMode;
- (id)motionDataOptions;
- (void)requestedMotionDataWithOption:(id)arg1;
- (void)sendMotionData:(id)arg1;
- (void)setIsSubscriptionActive:(bool)arg1;
- (void)setIsTestMode:(bool)arg1;
- (void)setMotionDataOptions:(id)arg1;
- (void)startMotionDataProviderWithOptions:(id)arg1;
- (void)startedProviderWithOptions:(id)arg1;
- (void)stopMotionDataProvider;
- (void)stoppedProvider;
- (void)subscribedToMotionDataWithOptions:(id)arg1;
- (void)subscriptionExpired;
- (void)unsubscribed;

@end
