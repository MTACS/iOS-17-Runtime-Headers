
@interface EFObservable : NSObject

+ (id)combineLatest:(id)arg1;
+ (id)concatenate:(id)arg1;
+ (id)emptyObservable;
+ (id)merge:(id)arg1;
+ (id)neverObservable;
+ (id)observableAfterDelay:(double)arg1 interval:(double)arg2 scheduler:(id)arg3;
+ (id)observableAfterDelay:(double)arg1 scheduler:(id)arg2;
+ (id)observableObserver;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableOnNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3;
+ (id)observableOnNotifyTokenWithName:(id)arg1;
+ (id)observableWithBlock:(id /* block */)arg1;
+ (id)observableWithError:(id)arg1;
+ (id)observableWithFuture:(id)arg1;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 delay:(id /* block */)arg5 scheduler:(id)arg6;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 scheduler:(id)arg5;
+ (id)observableWithResult:(id)arg1;
+ (id)observableWithResults:(id)arg1;
+ (id)observableWithResults:(id)arg1 scheduler:(id)arg2;
+ (id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2;

- (id)allObjects:(id*)arg1;
- (id)debounceWithTimeInterval:(double)arg1;
- (id)debounceWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)delay:(double)arg1 scheduler:(id)arg2;
- (id)distinctUntilChanged;
- (id)doOnCancel:(id /* block */)arg1;
- (id)doOnCompletion:(id /* block */)arg1;
- (id)doOnError:(id /* block */)arg1;
- (id)doOnNext:(id /* block */)arg1;
- (id)doOnSubscribe:(id /* block */)arg1;
- (id)doOnTerminate:(id /* block */)arg1;
- (id)filter:(id /* block */)arg1;
- (id)first;
- (id)map:(id /* block */)arg1;
- (id)multicast:(id)arg1;
- (id)observeOn:(id)arg1;
- (id)publish;
- (id)replay;
- (id)replay:(unsigned long long)arg1;
- (id)sampleWithObservable:(id)arg1;
- (id)sampleWithTimeInterval:(double)arg1;
- (id)sampleWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)skip:(unsigned long long)arg1;
- (id)startWith:(id)arg1;
- (id)startWith:(id)arg1 scheduler:(id)arg2;
- (id)subscribeOn:(id)arg1;
- (id)subscribeWithResultBlock:(id /* block */)arg1;
- (id)take:(unsigned long long)arg1;

@end