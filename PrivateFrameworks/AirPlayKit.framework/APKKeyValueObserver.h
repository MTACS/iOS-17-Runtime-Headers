
@interface APKKeyValueObserver : NSObject {
    id /* block */  _changeHandler;
    NSString * _keyPath;
    id  _observeredObject;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) id /* block */ changeHandler;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) id observeredObject;
@property (nonatomic, readonly) unsigned long long options;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(id /* block */)arg4;
- (void)invalidate;
- (id)keyPath;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observeredObject;
- (unsigned long long)options;

@end
