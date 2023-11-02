
@interface ARUIObserverStore : NSObject {
    NSPointerArray * _observers;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (unsigned long long)count;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
