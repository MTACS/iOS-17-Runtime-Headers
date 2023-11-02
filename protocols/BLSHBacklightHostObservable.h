
@protocol BLSHBacklightHostObservable <BLSBacklightStateObservable>

@required

- (void)addObserver:(id <BLSHBacklightHostObserving>)arg1;
- (unsigned long long)backlightStateChangeTimestamp;
- (NSString *)backlightStateDescription;
- (void)removeObserver:(id <BLSHBacklightHostObserving>)arg1;

@end
