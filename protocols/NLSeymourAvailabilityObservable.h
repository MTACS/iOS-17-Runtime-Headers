
@protocol NLSeymourAvailabilityObservable

@required

- (void)addObserver:(id <NLSeymourAvailabilityObserver>)arg1;
- (void)notifyObservers;
- (id)observers;
- (void)removeObserver:(id <NLSeymourAvailabilityObserver>)arg1;

@end
