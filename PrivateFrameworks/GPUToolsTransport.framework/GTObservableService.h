
@interface GTObservableService : NSObject {
    unsigned long long  _nextObserverId;
    NSMutableDictionary * _observerIdToObserver;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;
- (id)init;
- (void)notifyAll:(id /* block */)arg1;
- (unsigned long long)registerObserver:(id)arg1;

@end
