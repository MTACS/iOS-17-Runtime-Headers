
@protocol FCAppActivityMonitor <NSObject>

@required

- (void)addObserver:(id <FCAppActivityObserving>)arg1;
- (void)removeObserver:(id <FCAppActivityObserving>)arg1;

@end
