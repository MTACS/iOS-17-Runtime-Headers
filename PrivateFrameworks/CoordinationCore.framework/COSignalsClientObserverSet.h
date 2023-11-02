
@interface COSignalsClientObserverSet : COClientObserverSet

@property (nonatomic, readonly) NSSet *constraints;

- (void)addClientObserver:(id)arg1 forNotificationName:(id)arg2;
- (id)constraints;

@end
