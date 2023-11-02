
@interface AFSafetyBlock : NSObject {
    id /* block */  _block;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasInvoked;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)invoke;
- (bool)invokeWithSignal:(long long)arg1;

@end
