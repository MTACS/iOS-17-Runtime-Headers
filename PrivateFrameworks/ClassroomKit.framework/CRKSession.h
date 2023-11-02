
@interface CRKSession : NSObject {
    <CRKGrowthFunction> * _backoffGrowthFunction;
    <CRKSessionDelegate> * _delegate;
    CRKRemoteEndpoint * _endpoint;
    double  _lostBeaconTimeout;
    bool  _requiresBeacon;
    CATTransport * _transport;
    CRKTransportPreflightOperation * _transportPreflightOperation;
    double  _willLoseBeaconWarningTimeout;
    double  mCurrentBackoffInterval;
    CATStateMachine * mFSM;
}

@property (nonatomic, readonly) <CRKGrowthFunction> *backoffGrowthFunction;
@property (nonatomic) <CRKSessionDelegate> *delegate;
@property (readonly) CRKRemoteEndpoint *endpoint;
@property (nonatomic) double lostBeaconTimeout;
@property (nonatomic) bool requiresBeacon;
@property (nonatomic, readonly, copy) NSDictionary *stateDictionary;
@property (nonatomic, retain) CATStateMachine *stateMachine;
@property (nonatomic, retain) CATTransport *transport;
@property (nonatomic, retain) CRKTransportPreflightOperation *transportPreflightOperation;
@property (nonatomic) double willLoseBeaconWarningTimeout;

- (void).cxx_destruct;
- (void)backoffDidFinish;
- (id)backoffGrowthFunction;
- (void)cancelConnectionAttempt;
- (void)connect;
- (id)delegate;
- (void)delegateConnected;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidBecomeNotConnectable;
- (void)delegateDidBecomeNotConnectableAndDidLoseBeacon;
- (void)delegateDidLoseBeacon;
- (void)delegateDisconnected;
- (void)delegateInvalidated;
- (void)delegateWillLoseBeacon;
- (void)didConnect;
- (id)endpoint;
- (void)enterBackoffCanConnect;
- (void)enterNoNetwork;
- (void)enterOutOfRange;
- (void)exitBackoffCanConnect;
- (void)failedToConnect;
- (void)foundBeacon;
- (id)initWithEndpoint:(id)arg1;
- (void)invalidate;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostBeacon;
- (double)lostBeaconTimeout;
- (void)lostConnection;
- (void)processFinishedTransportPreflightOperation:(id)arg1;
- (void)registerDefaults;
- (void)rejected;
- (bool)requiresBeacon;
- (void)resetBackoff;
- (void)setDelegate:(id)arg1;
- (void)setLostBeaconTimeout:(double)arg1;
- (void)setRequiresBeacon:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setTransport:(id)arg1;
- (void)setTransportPreflightOperation:(id)arg1;
- (void)setWillLoseBeaconWarningTimeout:(double)arg1;
- (void)startPreflightingTransport:(id)arg1;
- (id)stateDictionary;
- (id)stateMachine;
- (void)stopPreflightingTransport;
- (id)studentSocketOptions;
- (id)transport;
- (id)transportPreflightOperation;
- (void)transportPreflightOperationDidFinish:(id)arg1;
- (void)tryConnecting;
- (double)willLoseBeaconWarningTimeout;

@end
