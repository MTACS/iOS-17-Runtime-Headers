
@interface TKKeyPathObserver : NSObject {
    id /* block */  _block;
    NSMutableArray * _observations;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (void)observe:(id)arg1 keyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stopObserving;

@end
