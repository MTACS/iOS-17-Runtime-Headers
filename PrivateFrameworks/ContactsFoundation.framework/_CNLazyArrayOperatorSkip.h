
@interface _CNLazyArrayOperatorSkip : _CNLazyArrayOperator {
    unsigned long long  _remainingSkipCount;
}

- (id)initWithInput:(id)arg1 limit:(unsigned long long)arg2;
- (id)nextObject;

@end
