
@protocol SXScrollObserverManager <NSObject>

@required

- (void)addScrollObserver:(id <SXScrollObserving>)arg1;
- (void)removeScrollObserver:(id <SXScrollObserving>)arg1;

@end
