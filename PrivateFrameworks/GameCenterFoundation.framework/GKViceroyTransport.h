
@interface GKViceroyTransport : NSObject <GKSessionPrivateDelegate, GKTransportProtocol> {
    GKConnection * _connection;
    NSMutableDictionary * _guestConnections;
    NSMutableDictionary * _guestSessions;
    GKViceroyLeaderElector * _leaderElector;
    GKViceroyRelay * _relay;
    NSData * _selfBlob;
    GKViceroySession * _session;
    <GKTransportClientDelegate> * _weakClientDelegate;
}

@property (nonatomic) <GKTransportClientDelegate> *clientDelegate;
@property (nonatomic, retain) GKConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *guestConnections;
@property (nonatomic, retain) NSMutableDictionary *guestSessions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKViceroyLeaderElector *leaderElector;
@property (nonatomic, readonly) NSData *nearbyConnectionData;
@property (nonatomic, retain) GKViceroyRelay *relay;
@property (nonatomic, retain) NSData *selfBlob;
@property (nonatomic, retain) GKViceroySession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptRelayResponse:(id)arg1 playerID:(id)arg2;
- (void)chooseBestHostingPlayerWithTransportContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientDelegate;
- (bool)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)connectToPlayersWithTransportContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (void)dealloc;
- (void)disconnectAllWithTransportContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enrichPeerDictionariesForPlayersConnection:(id)arg1;
- (id)guestConnections;
- (id)guestSessions;
- (void)handleRelayPushData:(id)arg1 onlyIfPreemptive:(bool)arg2;
- (void)initSessionIfNeeded;
- (id)initWithClientDelegate:(id)arg1 transportSupport:(id)arg2;
- (id)leaderElector;
- (void)localConnectionDataWithCompletionHandler:(id /* block */)arg1;
- (id)nearbyConnectionData;
- (id)peerIdFromPlayer:(id)arg1;
- (id)playerIDFromPeerID:(id)arg1;
- (id)playerIDFromSession:(id)arg1;
- (void)preemptRelay:(id)arg1;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4;
- (id)relay;
- (id)selfBlob;
- (bool)sendScopedData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 dataScope:(long long)arg4 transportContext:(id)arg5 error:(id*)arg6;
- (bool)sendScopedDataToAll:(id)arg1 dataMode:(long long)arg2 dataScope:(long long)arg3 transportContext:(id)arg4 error:(id*)arg5;
- (id)session;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;
- (void)session:(id)arg1 networkStatisticsChanged:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;
- (void)setClientDelegate:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setGuestConnections:(id)arg1;
- (void)setGuestSessions:(id)arg1;
- (void)setLeaderElector:(id)arg1;
- (void)setRelay:(id)arg1;
- (void)setSelfBlob:(id)arg1;
- (void)setSession:(id)arg1;
- (id)voiceChatWithName:(id)arg1 players:(id)arg2 transportContext:(id)arg3;

@end
