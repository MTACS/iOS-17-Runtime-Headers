
@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {
    MRClient * _clientProperties;
    NSMutableArray * _clientPropertiesCompletions;
    NSArray * _nowPlayingClients;
    NSMutableArray * _playerClients;
    MRPlayerPath * _playerPath;
}

@property (nonatomic, readonly) MRClient *client;
@property (nonatomic, copy) MRClient *clientProperties;
@property (nonatomic, readonly) NSArray *nowPlayingClients;
@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (void).cxx_destruct;
- (id)client;
- (id)clientProperties;
- (id)debugDescription;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (void)handleClientPropertiesRequestWithCompletion:(id /* block */)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (id)nowPlayingClients;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)playerPath;
- (void)removePlayer:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)setClientProperties:(id)arg1;

@end
