
@protocol SBSystemActionDataSourceObservable <NSObject>

@required

- (void)addObserver:(id <SBSystemActionDataSourceObserver>)arg1;
- (void)removeObserver:(id <SBSystemActionDataSourceObserver>)arg1;

@end
