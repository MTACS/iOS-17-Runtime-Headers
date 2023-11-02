
@interface REHealthStore : RESingleton {
    HKHealthStore * _healthStore;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_createStore;
- (id)_init;
- (bool)_isClockHostApp;
- (void)accessHealthStore:(id /* block */)arg1;

@end
