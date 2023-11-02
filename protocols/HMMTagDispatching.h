
@protocol HMMTagDispatching <HMMTagSubmitting>

@required

- (void)registerTagObserver:(id <HMMTagObserving>)arg1 forTags:(NSArray *)arg2;
- (void)unregisterTagObserver:(id <HMMTagObserving>)arg1 forTags:(NSArray *)arg2;

@end
