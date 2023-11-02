
@interface AFMultiArgumentSafetyBlock : NSObject {
    id  _block;
    NSMethodSignature * _blockMethodSignature;
    NSArray * _defaultValueArray;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasInvoked;
}

- (void).cxx_destruct;
- (id)initWithBlock:(id)arg1;
- (id)initWithBlock:(id)arg1 defaultValueArray:(id)arg2;
- (id)initWithBlock:(id)arg1 defaultValues:(id)arg2;
- (bool)invoke;
- (bool)invokeWithValueArray:(id)arg1;
- (bool)invokeWithValues:(id)arg1;

@end
