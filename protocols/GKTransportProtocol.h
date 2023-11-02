
@protocol GKTransportProtocol

@required

- (void)acceptRelayResponse:(NSDictionary *)arg1 playerID:(NSString *)arg2;
- (void)chooseBestHostingPlayerWithTransportContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: GKTransportContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (bool)connectToGuestPlayer:(GKPlayer *)arg1 withHostPlayer:(GKPlayer *)arg2;
- (void)connectToNearbyPlayer:(GKPlayer *)arg1 withConnectionData:(NSData *)arg2;
- (void)connectToPlayersWithTransportContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: GKTransportContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disconnectAllWithTransportContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: GKTransportContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)enrichPeerDictionariesForPlayersConnection:(NSArray *)arg1;
- (void)handleRelayPushData:(NSDictionary *)arg1 onlyIfPreemptive:(bool)arg2;
- (void)localConnectionDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSData *)nearbyConnectionData;
- (void)preemptRelay:(NSString *)arg1;
- (bool)sendScopedData:(NSData *)arg1 toPlayers:(NSArray *)arg2 dataMode:(long long)arg3 dataScope:(long long)arg4 transportContext:(GKTransportContext *)arg5 error:(id*)arg6;
- (bool)sendScopedDataToAll:(NSData *)arg1 dataMode:(long long)arg2 dataScope:(long long)arg3 transportContext:(GKTransportContext *)arg4 error:(id*)arg5;
- (GKVoiceChat *)voiceChatWithName:(NSString *)arg1 players:(NSArray *)arg2 transportContext:(GKTransportContext *)arg3;

@end
