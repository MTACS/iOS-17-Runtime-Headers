
@interface _CNLazyArrayOperatorTake : _CNLazyArrayOperator {
    unsigned long long  _remainingTakeCount;
}

- (id)initWithInput:(id)arg1 limit:(unsigned long long)arg2;
- (id)nextObject;

@end
