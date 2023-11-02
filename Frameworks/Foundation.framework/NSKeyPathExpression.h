
@interface NSKeyPathExpression : NSFunctionExpression

- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)initWithKeyPath:(id)arg1;
- (id)initWithOperand:(id)arg1 andKeyPath:(id)arg2;
- (id)keyPath;
- (id)pathExpression;
- (id)predicateFormat;

@end
