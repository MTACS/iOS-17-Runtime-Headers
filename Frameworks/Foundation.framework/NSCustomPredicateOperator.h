
@interface NSCustomPredicateOperator : NSPredicateOperator {
    struct _operatorFlags { 
        unsigned int _usesKVC : 1; 
        unsigned int _validatedSelector : 1; 
        unsigned int _validatedKeys : 1; 
        unsigned int _reservedOperatorFlags : 29; 
    }  _operatorFlags;
    SEL  _selector;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (SEL)selector;
- (id)symbol;

@end
