
@interface _FLNetworkObserverBlock : NSObject {
    id /* block */  _block;
    FLNetworkObserver * _networkObserver;
}

- (void).cxx_destruct;
- (id)_initWithBlock:(id /* block */)arg1 networkObserver:(id)arg2;
- (void)dealloc;
- (void)executeBlock;

@end
