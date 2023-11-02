
@interface REObservableSingleton : RESingleton {
    REObserverStore * _store;
}

@property (nonatomic, readonly) unsigned long long numberOfObservers;

- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)enumerateObservers:(id /* block */)arg1;
- (unsigned long long)numberOfObservers;
- (void)removeObserver:(id)arg1;

@end
