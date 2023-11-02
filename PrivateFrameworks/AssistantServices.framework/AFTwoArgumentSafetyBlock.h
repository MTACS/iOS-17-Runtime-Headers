
@interface AFTwoArgumentSafetyBlock : NSObject {
    id /* block */  _block;
    id  _defaultValue1;
    id  _defaultValue2;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasInvoked;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1 defaultValue1:(id)arg2 defaultValue2:(id)arg3;
- (bool)invokeWithValue:(id)arg1 andValue:(id)arg2;

@end
