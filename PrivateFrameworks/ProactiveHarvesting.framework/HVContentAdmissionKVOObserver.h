
@interface HVContentAdmissionKVOObserver : NSObject {
    id /* block */  _handler;
    NSString * _key;
}

+ (id)observeObject:(id)arg1 key:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 handler:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
