
@protocol MRUSpatialAccessibilityObserverDelegate <NSObject>

@required

- (void)spatialAccessilityObserver:(MRUSpatialAccessibilityObserver *)arg1 didChangeHeadTrackingEnabled:(bool)arg2;
- (void)spatialAccessilityObserver:(MRUSpatialAccessibilityObserver *)arg1 didChangeMonoAudioEnabled:(bool)arg2;

@end
