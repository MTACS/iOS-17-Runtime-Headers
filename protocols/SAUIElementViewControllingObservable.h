
@protocol SAUIElementViewControllingObservable <NSObject>

@required

- (void)addElementViewControllingObserver:(id <SAUIElementViewControllingObserving>)arg1;
- (void)removeElementViewControllingObserver:(id <SAUIElementViewControllingObserving>)arg1;

@end
