
@interface _CNLazyArrayOperatorSkipLast : _CNLazyArrayOperator {
    CNQueue * _buffer;
    bool  _haveFilledBuffer;
    unsigned long long  _limit;
}

- (void).cxx_destruct;
- (bool)fillBuffer;
- (id)initWithInput:(id)arg1 limit:(unsigned long long)arg2;
- (id)nextObject;

@end
