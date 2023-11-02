
@interface AFOneArgumentSafetyBlock : NSObject {
    id /* block */  _block;
    id  _defaultValue;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasInvoked;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1 defaultValue:(id)arg2;
- (bool)invokeWithValue:(id)arg1;

@end
