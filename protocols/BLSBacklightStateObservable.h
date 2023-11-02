
@protocol BLSBacklightStateObservable <NSObject>

@required

- (void)addObserver:(id <BLSBacklightStateObserving>)arg1;
- (long long)backlightState;
- (bool)deviceSupportsAlwaysOn;
- (long long)flipbookState;
- (bool)isAlwaysOnEnabled;
- (bool)isTransitioning;
- (void)removeObserver:(id <BLSBacklightStateObserving>)arg1;

@end
