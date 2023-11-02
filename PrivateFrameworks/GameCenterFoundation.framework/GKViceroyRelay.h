
@interface GKViceroyRelay : NSObject {
    GKConnection * _connection;
    <GKTransportSupport> * _transportSupportWeak;
    <GKTransportClientDelegate> * _weakClientDelegate;
}

@property (nonatomic) <GKTransportClientDelegate> *clientDelegate;
@property (nonatomic, retain) GKConnection *connection;
@property (nonatomic) <GKTransportSupport> *transportSupport;

- (void).cxx_destruct;
- (void)acceptRelayResponse:(id)arg1 playerID:(id)arg2;
- (id)clientDelegate;
- (id)connection;
- (id)dataFromBase64String:(id)arg1;
- (void)didReceiveRelayPushData:(id)arg1;
- (void)didReceiveRelayPushNotification:(id)arg1;
- (void)disconnect;
- (void)handleRelayPushData:(id)arg1 onlyIfPreemptive:(bool)arg2;
- (id)initWithClientDelegate:(id)arg1 connection:(id)arg2 transportSupport:(id)arg3;
- (void)initiateRelayConnectionForPlayerID:(id)arg1 connectionContext:(id)arg2;
- (id)initiateRelayInfoFromPush:(id)arg1 forPlayerID:(id)arg2;
- (id)initiateRelayInfoFromServerResponse:(id)arg1 forPlayerID:(id)arg2;
- (void)initiateRelayResponse:(id)arg1 playerID:(id)arg2;
- (void)preemptRelay:(id)arg1;
- (void)relayDidInitiateConnection:(id)arg1 forPlayerID:(id)arg2;
- (void)relayDidUpdateConnection:(id)arg1 forPlayerID:(id)arg2;
- (void)requestRelayInitiateForPlayerID:(id)arg1 connectionContext:(id)arg2;
- (void)requestRelayUpdateForPlayerID:(id)arg1 connectionContext:(id)arg2;
- (void)sessionDidInitiateOrUpdateRelay:(id)arg1 playerID:(id)arg2;
- (void)setClientDelegate:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setTransportSupport:(id)arg1;
- (bool)shouldStartRelayForPlayerID:(id)arg1;
- (id)transportSupport;
- (void)updateRelayConnectionForPlayerID:(id)arg1 connectionContext:(id)arg2;
- (id)updateRelayInfoFromPush:(id)arg1 forPlayerID:(id)arg2;

@end
