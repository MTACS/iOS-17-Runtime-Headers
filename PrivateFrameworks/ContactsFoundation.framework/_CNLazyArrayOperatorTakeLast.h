
@interface _CNLazyArrayOperatorTakeLast : _CNLazyArrayOperator {
    CNQueue * _buffer;
    bool  _haveFilledBuffer;
}

- (void).cxx_destruct;
- (void)fillBuffer;
- (id)initWithInput:(id)arg1 limit:(unsigned long long)arg2;
- (id)nextObject;

@end
