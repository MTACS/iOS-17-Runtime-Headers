
@interface _JEAtomicCounter : NSObject {
    _Atomic long long  _value;
}

- (long long)decrement;
- (id)description;
- (unsigned long long)hash;
- (long long)increment;
- (id)init;
- (id)initWithInitialValue:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end
