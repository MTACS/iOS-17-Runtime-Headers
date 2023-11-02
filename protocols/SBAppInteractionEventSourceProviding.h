
@protocol SBAppInteractionEventSourceProviding <NSObject>

@required

- (void)addObserver:(id <SBAppInteractionEventSourceObserving>)arg1;
- (void)removeObserver:(id <SBAppInteractionEventSourceObserving>)arg1;

@end
