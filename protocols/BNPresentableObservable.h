
@protocol BNPresentableObservable <NSObject>

@required

- (void)addPresentableObserver:(id <BNPresentableObserving>)arg1;
- (void)removePresentableObserver:(id <BNPresentableObserving>)arg1;

@end
