
@interface LNActionConfigurationCondition : NSObject <NSCopying, NSSecureCoding> {
    long long  _comparisonOperator;
    NSString * _parameterIdentifier;
    LNValue * _value;
}

@property (nonatomic, readonly) long long comparisonOperator;
@property (nonatomic, readonly, copy) NSString *parameterIdentifier;
@property (nonatomic, readonly) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)comparisonOperator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComparisonOperator:(long long)arg1 widgetFamilies:(id)arg2;
- (id)initWithComparisonOperator:(long long)arg1 widgetFamily:(id)arg2;
- (id)initWithParameterIdentifier:(id)arg1 comparisonOperator:(long long)arg2 value:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)parameterIdentifier;
- (id)value;

@end
