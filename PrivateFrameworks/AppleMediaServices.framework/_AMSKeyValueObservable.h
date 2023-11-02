
@interface _AMSKeyValueObservable : AMSObservable {
    NSObject * _context;
    NSString * _keyPath;
    NSObject * _object;
}

@property (nonatomic, retain) NSObject *context;
@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic) NSObject *object;

- (void).cxx_destruct;
- (bool)cancel;
- (id)context;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
- (id)keyPath;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)sendCompletion;
- (void)setContext:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;

@end
