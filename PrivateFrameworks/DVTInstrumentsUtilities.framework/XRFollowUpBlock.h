
@interface XRFollowUpBlock : NSObject {
    id /* block */  _block;
    XRFollowUpBlock * _myselfOrNil;
    NSOperation * _op;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _shouldntExecuteBlock;
}

- (void).cxx_destruct;
- (void)go;
- (id)initWithBlock:(id /* block */)arg1 operation:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
