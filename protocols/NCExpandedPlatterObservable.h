
@protocol NCExpandedPlatterObservable <NSObject>

@required

- (void)addExpandedPlatterObserver:(id <NCExpandedPlatterObserving>)arg1;
- (void)removeExpandedPlatterObserver:(id <NCExpandedPlatterObserving>)arg1;

@end
