
@interface _JEAtomicFlag : NSObject {
    _Atomic bool  _value;
}

- (bool)compareWithValue:(bool)arg1 andExchangeWithValue:(bool)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInitialValue:(bool)arg1;
- (bool)isEqual:(id)arg1;

@end
