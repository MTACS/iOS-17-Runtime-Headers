
@interface SVMediaPlaybackController : NSObject {
    AVPlayer * _currentlyPlaying;
    NSMapTable * _timeControlStatusObservers;
}

@property (nonatomic) AVPlayer *currentlyPlaying;
@property (nonatomic, readonly) NSMapTable *timeControlStatusObservers;

- (void).cxx_destruct;
- (id)currentlyPlaying;
- (id)init;
- (void)registerPlayer:(id)arg1;
- (void)setCurrentlyPlaying:(id)arg1;
- (id)timeControlStatusObservers;
- (void)unregisterPlayer:(id)arg1;
- (void)updateCurrentlyPlaying:(id)arg1;

@end
