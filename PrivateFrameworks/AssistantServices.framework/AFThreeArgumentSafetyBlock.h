
@interface AFThreeArgumentSafetyBlock : NSObject {
    id /* block */  _block;
    id  _defaultValue1;
    id  _defaultValue2;
    id  _defaultValue3;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasInvoked;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1 defaultValue1:(id)arg2 defaultValue2:(id)arg3 defaultValue3:(id)arg4;
- (bool)invokeWithValue:(id)arg1 andValue:(id)arg2 andValue:(id)arg3;

@end
