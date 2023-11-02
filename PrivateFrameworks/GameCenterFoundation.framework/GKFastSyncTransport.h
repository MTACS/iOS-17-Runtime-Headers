
@interface GKFastSyncTransport : NSObject <GKTransportProtocol> {
    void _gameChannel;
    void _lobbyChannel;
    void _localParticipantHandle;
    void clientDelegate;
    void gameChannelMigrationTask;
    void lobbyChannelMigrationTask;
    void newChannelObservationTask;
    void reporter;
}

@property (nonatomic, readonly) NSData *nearbyConnectionData;

- (void).cxx_destruct;
- (void)acceptRelayResponse:(id)arg1 playerID:(id)arg2;
- (void)chooseBestHostingPlayerWithTransportContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 28: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out const /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)connectToPlayersWithTransportContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 25: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out const /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)disconnectAllWithTransportContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 25: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out const /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)enrichPeerDictionariesForPlayersConnection:(id)arg1;
- (void)handleRelayPushData:(id)arg1 onlyIfPreemptive:(bool)arg2;
- (id)init;
- (id)initWithClientDelegate:(id)arg1 reporter:(id)arg2;
- (void)localConnectionDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 18: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)nearbyConnectionData;
- (void)preemptRelay:(id)arg1;
- (bool)sendScopedData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 dataScope:(long long)arg4 transportContext:(id)arg5 error:(id*)arg6;
- (bool)sendScopedDataToAll:(id)arg1 dataMode:(long long)arg2 dataScope:(long long)arg3 transportContext:(id)arg4 error:(id*)arg5;
- (id)voiceChatWithName:(id)arg1 players:(id)arg2 transportContext:(id)arg3;

@end
