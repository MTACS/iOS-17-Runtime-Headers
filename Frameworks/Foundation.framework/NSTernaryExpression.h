
@interface NSTernaryExpression : NSExpression {
    NSExpression * _falseExpression;
    NSPredicate * _predicate;
    NSExpression * _trueExpression;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)falseExpression;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)predicateFormat;
- (id)trueExpression;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)_keypathsForDerivedPropertyValidation:(id*)arg1;

@end
