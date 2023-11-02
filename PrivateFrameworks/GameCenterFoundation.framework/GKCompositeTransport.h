
@interface GKCompositeTransport : NSObject <GKTransportProtocol> {
    <GKTransportProtocol> * _fastSyncTransport;
    <GKTransportClientDelegate> * _instrumentedClientDelegate;
    GKMultiplayerActivityReporter * _reporter;
    <GKTransportProtocol> * _viceroyTransport;
}

@property (nonatomic, retain) <GKTransportProtocol> *fastSyncTransport;
@property (nonatomic, retain) <GKTransportClientDelegate> *instrumentedClientDelegate;
@property (nonatomic, readonly) NSData *nearbyConnectionData;
@property (nonatomic, retain) GKMultiplayerActivityReporter *reporter;
@property (nonatomic, retain) <GKTransportProtocol> *viceroyTransport;

- (void).cxx_destruct;
- (void)acceptRelayResponse:(id)arg1 playerID:(id)arg2;
- (void)chooseBestHostingPlayerWithTransportContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)connectToPlayersWithTransportContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disconnectAllWithTransportContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enrichPeerDictionariesForPlayersConnection:(id)arg1;
- (id)fastSyncTransport;
- (void)handleRelayPushData:(id)arg1 onlyIfPreemptive:(bool)arg2;
- (id)initWithClientDelegate:(id)arg1 transportSupport:(id)arg2 reporter:(id)arg3 transportContext:(id)arg4;
- (id)instrumentedClientDelegate;
- (void)localConnectionDataWithCompletionHandler:(id /* block */)arg1;
- (id)nearbyConnectionData;
- (void)preemptRelay:(id)arg1;
- (id)reporter;
- (bool)sendScopedData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 dataScope:(long long)arg4 transportContext:(id)arg5 error:(id*)arg6;
- (bool)sendScopedDataToAll:(id)arg1 dataMode:(long long)arg2 dataScope:(long long)arg3 transportContext:(id)arg4 error:(id*)arg5;
- (void)setFastSyncTransport:(id)arg1;
- (void)setInstrumentedClientDelegate:(id)arg1;
- (void)setReporter:(id)arg1;
- (void)setViceroyTransport:(id)arg1;
- (id)transportForContext:(id)arg1;
- (id)viceroyTransport;
- (id)voiceChatWithName:(id)arg1 players:(id)arg2 transportContext:(id)arg3;

@end
