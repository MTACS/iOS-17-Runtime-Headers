
@interface GKObserverTrampoline : NSObject {
    id /* block */  _block;
    int  _cancellationPredicate;
    NSString * _keyPath;
    id  _observee;
    unsigned long long  _options;
}

@property (readonly) id token;

- (void).cxx_destruct;
- (void)cancelObservation;
- (void)dealloc;
- (id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startObserving;
- (id)token;

@end
