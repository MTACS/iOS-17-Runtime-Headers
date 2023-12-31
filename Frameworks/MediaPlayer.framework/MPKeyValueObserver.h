
@interface MPKeyValueObserver : NSObject {
    id /* block */  _handler;
    NSString * _keyPath;
    id  _object;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (id)keyPath;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
