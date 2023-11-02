
@protocol NLExternalSeymourSessionStatusObservable

@required

- (void)addObserver:(id <NLExternalSeymourSessionStatusObserver>)arg1;
- (void)notifyObservers;
- (id)observers;
- (void)removeObserver:(id <NLExternalSeymourSessionStatusObserver>)arg1;

@end
