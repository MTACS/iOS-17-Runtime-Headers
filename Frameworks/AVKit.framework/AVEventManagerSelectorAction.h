
@interface AVEventManagerSelectorAction : AVEventManagerAction {
    unsigned long long  _parameterCount;
    SEL  _selector;
    id  _target;
}

- (void).cxx_destruct;
- (bool)hasMatchingTarget:(id)arg1 withSelector:(SEL)arg2 forEvent:(id)arg3;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 event:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)sendAction:(id)arg1;

@end
