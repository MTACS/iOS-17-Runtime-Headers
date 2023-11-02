
@interface NSPropertyTransform : NSObject <NSSecureCoding> {
    NSPropertyTransform * _prerequisiteTransform;
    NSString * _propertyName;
    bool  _replaceMissingValueOnly;
    NSExpression * _valueExpression;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
