
@interface AVPlayerInterstitialEventMonitor : NSObject {
    AVQueuePlayer * _interstitialPlayer;
    struct OpaqueFigPlayerInterstitialCoordinator { } * _observedCoord;
    AVPlayer * _primaryPlayer;
    AVWeakReference * _weakReference;
}

@property (readonly) AVPlayerInterstitialEvent *currentEvent;
@property (readonly, copy) NSArray *events;
@property (nonatomic, readonly) AVQueuePlayer *interstitialPlayer;
@property (nonatomic, readonly) AVPlayer *primaryPlayer;

+ (id)interstitialEventMonitorWithPrimaryPlayer:(id)arg1;

- (void).cxx_destruct;
- (void)_addMonitorListeners:(struct OpaqueFigPlayerInterstitialCoordinator { }*)arg1;
- (void)_removeMonitorListeners;
- (id)currentEvent;
- (void)dealloc;
- (id)events;
- (id)init;
- (id)initWithPrimaryPlayer:(id)arg1;
- (id)interstitialPlayer;
- (id)makeCopyOf:(id)arg1 immutable:(bool)arg2;
- (id)primaryPlayer;

@end
