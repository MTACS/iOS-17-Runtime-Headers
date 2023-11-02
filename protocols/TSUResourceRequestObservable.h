
@protocol TSUResourceRequestObservable <NSObject>

@required

- (void)addObserver:(id <TSUResourceRequestObserver>)arg1;
- (void)removeObserver:(id <TSUResourceRequestObserver>)arg1;

@end
