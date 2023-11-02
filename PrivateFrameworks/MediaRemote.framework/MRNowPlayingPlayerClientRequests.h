
@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {
    NSOperationQueue * _enquedNowPlayingInfoAssetRequests;
    NSOperationQueue * _enquedNowPlayingInfoRequests;
    MRPlaybackQueue * _playbackQueue;
    NSMutableDictionary * _playbackQueueCompletions;
    unsigned int  _playbackState;
    NSMutableArray * _playbackStateCompletions;
    MRPlayerPath * _playerPath;
    MRPlayer * _playerProperties;
    NSMutableArray * _playerPropertiesCompletions;
    NSObject<OS_dispatch_queue> * _responseQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MRPlaybackQueueSubscriptionController * _subscriptionController;
    NSArray * _supportedCommands;
    NSMutableArray * _supportedCommandsCompletions;
}

@property (nonatomic, copy) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, copy) MRPlayer *playerProperties;
@property (nonatomic, readonly) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (nonatomic, copy) NSArray *supportedCommands;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (void)enqueuePlaybackQueueRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePlaybackStateRequestWithCompletion:(id /* block */)arg1;
- (void)handlePlayerPropertiesRequestWithCompletion:(id /* block */)arg1;
- (void)handleSupportedCommandsRequestWithCompletion:(id /* block */)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (id)playbackQueue;
- (unsigned int)playbackState;
- (id)playerPath;
- (id)playerProperties;
- (void)restoreNowPlayingClientState;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPlayerProperties:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)subscriptionController;
- (id)supportedCommands;
- (void)updateContentItemArtwork:(id)arg1;
- (void)updateContentItems:(id)arg1;
- (void)updatePlaybackQueueIfUninitialized:(id)arg1;
- (void)updatePlaybackStateIfUninitialized:(unsigned int)arg1;
- (void)updateSupportedCommandsIfUninitialized:(id)arg1;

@end
