
@interface AVCaptureBlockKVOObserver : NSObject {
    id /* block */  _handler;
    NSString * _keyPath;
    NSObject * _object;
}

- (void)dealloc;
- (id)initWithObjectToObserve:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
