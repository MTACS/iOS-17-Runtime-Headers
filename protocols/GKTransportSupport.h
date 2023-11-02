
@protocol GKTransportSupport

@required

- (unsigned long long)currentPlayerCount;
- (unsigned long long)currentPlayerCountIncludingLocalPlayer;
- (unsigned long long)expectedPlayerCount;
- (<GKPlayerConnectionContext> *)getConnectionContextForPlayerID:(NSString *)arg1;
- (NSArray *)guestPlayers;
- (GKPlayer *)playerFromID:(NSString *)arg1;
- (bool)sendPacketDataToAll:(NSData *)arg1 packetType:(unsigned char)arg2 dataMode:(long long)arg3 error:(id*)arg4;
- (<GKPlayerConnectionContext> *)updateConnectionInfo:(NSDictionary *)arg1 forPlayerID:(NSString *)arg2;

@end
