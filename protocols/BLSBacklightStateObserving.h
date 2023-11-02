
@protocol BLSBacklightStateObserving <NSObject>

@optional

- (void)backlight:(id <BLSBacklightStateObservable>)arg1 activatingWithEvent:(BLSBacklightChangeEvent *)arg2;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 deactivatingWithEvent:(BLSBacklightChangeEvent *)arg2;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 didChangeAlwaysOnEnabled:(bool)arg2;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (void)backlight:(id <BLSBacklightStateObservable>)arg1 performingEvent:(BLSBacklightChangeEvent *)arg2;

@end
