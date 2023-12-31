
@protocol TVObservable <NSObject>

@required

- (void)addObserver:(id <TVObserving>)arg1 forEvent:(NSString *)arg2;
- (void)removeObserver:(id <TVObserving>)arg1;
- (void)removeObserver:(id <TVObserving>)arg1 forEvent:(NSString *)arg2;

@end
