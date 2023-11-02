
@interface SGLazyInit : NSObject {
    id  _cachedObject;
    id /* block */  _destructor;
    id /* block */  _initializer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)destroyCachedObject;
- (id)getObject;
- (id)initWithInitializer:(id /* block */)arg1 destructor:(id /* block */)arg2;
- (id)peekAtCachedObject;

@end
