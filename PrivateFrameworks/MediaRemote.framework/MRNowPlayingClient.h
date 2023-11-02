
@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {
    MRPlayer * _activePlayer;
    NSObject<OS_dispatch_queue> * _avscQueue;
    bool  _canBeNowPlaying;
    double  _canBeNowPlayingTimestamp;
    NSMutableArray * _commandQueue;
    bool  _isForeground;
    bool  _perPlayerCanBeNowPlaying;
    NSMutableArray * _playerClients;
    MRPlayerPath * _playerPath;
    NSObject<OS_dispatch_queue> * _replayQueue;
    bool  _useMediaRemoteActivePlayerHeuristic;
}

@property (nonatomic, readonly) MRPlayerPath *activePlayerPath;
@property (nonatomic) bool canBeNowPlaying;
@property (nonatomic, retain) MRClient *client;
@property (nonatomic) bool perPlayerCanBeNowPlaying;
@property (nonatomic, readonly) NSArray *playerClients;
@property (nonatomic, retain) MRPlayerPath *playerPath;
@property (nonatomic) bool useMediaRemoteActivePlayerHeuristic;

- (void).cxx_destruct;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (id)activePlayerPath;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (bool)canBeNowPlaying;
- (bool)canBeNowPlayingForPlayer:(id)arg1;
- (id)client;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)enqueueCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3 commandCompletion:(id /* block */)arg4;
- (id)initWithPlayerPath:(id)arg1;
- (void)mergeClient:(id)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)arg1;
- (bool)perPlayerCanBeNowPlaying;
- (id)playerClients;
- (id)playerPath;
- (void)reevaluateActivePlayerWithReason:(id)arg1 completion:(id /* block */)arg2;
- (void)removePlayer:(id)arg1;
- (void)requestActiveForPlayerPath:(id)arg1 completion:(id /* block */)arg2;
- (void)restoreNowPlayingClientState;
- (void)sendQueuedCommandsWithReason:(id)arg1;
- (void)setActivePlayerPath:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)setCanBeNowPlaying:(bool)arg1;
- (void)setClient:(id)arg1;
- (void)setPerPlayerCanBeNowPlaying:(bool)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setUseMediaRemoteActivePlayerHeuristic:(bool)arg1;
- (void)updateActivePlayerPath:(id)arg1 completion:(id /* block */)arg2;
- (bool)useMediaRemoteActivePlayerHeuristic;

@end
