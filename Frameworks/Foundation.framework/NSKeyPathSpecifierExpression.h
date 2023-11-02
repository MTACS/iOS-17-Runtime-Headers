
@interface NSKeyPathSpecifierExpression : NSExpression {
    NSString * _value;
}

+ (bool)supportsSecureCoding;

- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)constantValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)predicateFormat;

@end