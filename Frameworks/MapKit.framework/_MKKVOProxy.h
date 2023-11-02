
@interface _MKKVOProxy : NSObject {
    <_MKKVOProxyDelegate> * _delegate;
}

@property (nonatomic) <_MKKVOProxyDelegate> *delegate;

- (void).cxx_destruct;
- (void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setDelegate:(id)arg1;

@end
