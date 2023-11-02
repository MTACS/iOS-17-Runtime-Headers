
@protocol BLSHBacklightHostObserving <BLSBacklightStateObserving>

@optional

- (void)backlight:(id <BLSHBacklightHostObservable>)arg1 didCompleteUpdateToFlipbookState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlight:(id <BLSHBacklightHostObservable>)arg1 didCompleteUpdateToFlipbookState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (void)backlightHost:(id <BLSHBacklightHostObservable><BLSBacklightChangeRequestable>)arg1 willTransitionToState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (bool)observesActivation;
- (bool)observesDeactivation;
- (bool)observesPerformingAllEvents;

@end
