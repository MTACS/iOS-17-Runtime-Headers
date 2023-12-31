
@interface NSExpressionDescription : NSPropertyDescription {
    NSExpression * _expression;
    unsigned long long  _expressionResultType;
    id  _reservedtype1_1;
    id  _reservedtype1_2;
    unsigned long long  _reservedtype1_3;
    id  _reservedtype1_4;
    unsigned long long  _reservedtype1_5;
    id  _reservedtype1_6;
    void * _reservedtype2_1;
    void * _reservedtype2_2;
    NSAttributeDescription * _underlyingAttribute;
}

@property (readonly, copy) NSString *attributeValueClassName;
@property (retain) NSExpression *expression;
@property unsigned long long expressionResultType;
@property (readonly, copy) NSString *valueTransformerName;

+ (bool)supportsSecureCoding;

- (unsigned long long)_propertyType;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)attributeValueClassName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expression;
- (unsigned long long)expressionResultType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setExpression:(id)arg1;
- (void)setExpressionResultType:(unsigned long long)arg1;
- (id)valueTransformerName;

@end
