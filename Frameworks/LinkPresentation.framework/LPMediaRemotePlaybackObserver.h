
@interface LPMediaRemotePlaybackObserver : NSObject {
    NSHashTable * _clients;
    double  _elapsedTime;
    MPModelGenericObject * _enqueuedItem;
    MPModelGenericObject * _enqueuedItemContext;
    bool  _enqueuedItemIsLive;
    bool  _isPlaying;
    NSTimer * _timer;
    double  _totalTime;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)dispatchPlayingItemDidChangeToAllClients;
- (double)elapsedFractionForPlaybackInformation:(id)arg1;
- (bool)isPlaying;
- (double)minimumUpdateInterval;
- (bool)playbackInformationMatchesPlayingItem:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)updatePlaybackState;

@end
