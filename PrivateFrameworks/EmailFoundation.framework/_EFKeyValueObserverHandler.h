
@interface _EFKeyValueObserverHandler : NSObject <EFCancelable> {
    id /* block */  _block;
    NSString * _keyPath;
    id  _object;
    bool  _observing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startObservingWithOptions:(unsigned long long)arg1;

@end
