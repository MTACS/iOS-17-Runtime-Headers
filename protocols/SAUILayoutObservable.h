
@protocol SAUILayoutObservable <NSObject>

@required

- (void)addElementLayoutSpecifierObserver:(id <SAUILayoutObserving>)arg1;
- (void)removeElementLayoutSpecifierObserver:(id <SAUILayoutObserving>)arg1;

@end
