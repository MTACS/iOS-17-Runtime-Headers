
@interface DSRapportDevice : NSObject {
    unsigned int  _deviceType;
    NSObject<OS_dispatch_source> * _discoveryExitTimer;
    NSString * _identifier;
    bool  _isSessionInForceL2CAP;
    bool  _isTryingForceDiscovery;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _responseTimeoutTimer;
    RPCompanionLinkDevice * _rpDevice;
    RPCompanionLinkClient * _screenOffDiscoveryClient;
    RPCompanionLinkClient * _sessionClient;
}

@property (nonatomic) unsigned int deviceType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) RPCompanionLinkDevice *rpDevice;

- (void).cxx_destruct;
- (void)_activateSessionClientWithForceL2CAP:(bool)arg1;
- (void)_forceBLEDiscoverytoSendRequestID;
- (void)_startDiscoveryExitTimer;
- (void)_startResponseTimeoutTimer;
- (void)activateSessionClient;
- (void)addRequestToQueue:(id)arg1;
- (unsigned int)deviceType;
- (id)identifier;
- (id)initWithRapportDevice:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (id)queue;
- (id)rpDevice;
- (void)sendNextRequest;
- (void)setDeviceType:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRpDevice:(id)arg1;

@end
