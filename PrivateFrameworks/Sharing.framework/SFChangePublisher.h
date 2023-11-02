
@interface SFChangePublisher : NSObject {
    NSPointerArray * _observers;
}

@property (nonatomic, readonly) NSPointerArray *observers;

- (void).cxx_destruct;
- (id)init;
- (id)observers;
- (void)publishChangeDescriptor:(unsigned long long)arg1 forObservable:(id)arg2;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end
