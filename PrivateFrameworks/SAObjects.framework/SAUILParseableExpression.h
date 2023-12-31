
@interface SAUILParseableExpression : SADomainObject

@property (nonatomic, retain) SADomainObject *context;
@property (nonatomic, copy) NSString *expressionString;

+ (id)parseableExpression;
+ (id)parseableExpressionWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)encodedClassName;
- (id)expressionString;
- (id)groupIdentifier;
- (void)setContext:(id)arg1;
- (void)setExpressionString:(id)arg1;

@end
