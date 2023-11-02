
@protocol SBActivityObservable <NSObject>

@required

- (void)addObserver:(id <SBActivityObserver>)arg1;
- (void)removeObserver:(id <SBActivityObserver>)arg1;

@end
