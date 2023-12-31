
@interface NSStringPredicateOperator : NSPredicateOperator {
    unsigned long long  _flags;
}

+ (bool)supportsSecureCoding;

- (id)_modifierString;
- (void)_setOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;

@end
