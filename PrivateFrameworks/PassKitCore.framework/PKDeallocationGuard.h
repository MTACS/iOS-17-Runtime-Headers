
@interface PKDeallocationGuard : NSObject {
    id /* block */  _block;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _invalidated;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)invalidate;

@end
