
@protocol VUINowPlayingObserverDelegate <NSObject>

@optional

- (void)nowPlayingObserver:(VUINowPlayingObserver *)arg1 latestObservationDidChange:(VUINowPlayingObservation *)arg2;

@end
