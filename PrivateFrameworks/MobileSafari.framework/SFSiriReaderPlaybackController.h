
@interface SFSiriReaderPlaybackController : NSObject <MRNowPlayingControllerDelegate> {
    float  _currentPlaybackRate;
    long long  _currentPlaybackState;
    <SFSiriReaderPlaybackControllerDelegate> * _delegate;
    MRDestination * _destination;
    NSString * _nowPlayingContentIdentifier;
    MRNowPlayingController * _playbackController;
}

@property (nonatomic, readonly) float currentPlaybackRate;
@property (nonatomic) long long currentPlaybackState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSiriReaderPlaybackControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *nowPlayingContentIdentifier;
@property (readonly) Class superclass;

+ (bool)playerResponseIsForSiriReadThis:(id)arg1;
+ (id)sharedPlaybackController;

- (void).cxx_destruct;
- (bool)_tearDownListenerIfNowPlayControllerIsTakenOverByResponse:(id)arg1;
- (void)controller:(id)arg1 contentItemsDidUpdate:(id)arg2;
- (void)controller:(id)arg1 playbackRateDidChangeFrom:(float)arg2 to:(float)arg3;
- (void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (float)currentPlaybackRate;
- (long long)currentPlaybackState;
- (id)delegate;
- (id)nowPlayingContentIdentifier;
- (void)pause;
- (void)play;
- (void)setCurrentPlaybackState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingContentIdentifier:(id)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setupNowPlayingListenerIfNeeded;
- (void)skipBackward;
- (void)skipForward;
- (void)updateContentIdentifierOnQueue:(id)arg1 completion:(id /* block */)arg2;

@end
