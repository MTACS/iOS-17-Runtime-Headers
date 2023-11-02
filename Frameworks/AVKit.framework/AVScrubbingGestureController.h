
@interface AVScrubbingGestureController : NSObject <AVScrubbingGesturePlatformAdapterDelegate> {
    float  _currentScrubRate;
    <AVScrubbingGestureControllerDelegate> * _delegate;
    bool  _enabled;
    AVScrubbingGestureConfiguration * _gestureConfiguration;
    float  _initialNormalizedTimelinePosition;
    float  _initialNormalizedTouchTranslation;
    AVObservationController * _observationController;
    AVScrubbingGesturePlatformAdapter * _platformAdapter;
    AVPlayerController * _playerController;
    float  _preScrubbingRate;
    NSTimer * _scrubMomentumIncrementTimer;
    bool  _scrubsHaveMomentum;
    float  _startingMomentumRate;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVScrubbingGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVScrubbingGesturePlatformAdapter *platformAdapter;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) bool scrubsHaveMomentum;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configurationForScrubbingGesturePlatformAdapter:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (id)initWithPlatformAdapter:(id)arg1;
- (id)platformAdapter;
- (id)playerController;
- (void)reset;
- (void)scrubbingGesturePlatformAdapterDidBeginScrubbing:(id)arg1;
- (void)scrubbingGesturePlatformAdapterDidContinueScrubbing:(id)arg1;
- (void)scrubbingGesturePlatformAdapterDidEndScrubbing:(id)arg1;
- (bool)scrubbingGesturePlatformAdapterIsActivelyScrubbing:(id)arg1;
- (bool)scrubsHaveMomentum;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setScrubsHaveMomentum:(bool)arg1;
- (unsigned long long)state;

@end
