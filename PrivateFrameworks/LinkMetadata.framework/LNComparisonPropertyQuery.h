
@interface LNComparisonPropertyQuery : LNPropertyQuery {
    NSNumber * _propertyIndex;
    unsigned long long  _type;
    LNValue * _value;
}

@property (nonatomic, readonly, copy) NSString *propertyIdentifier;
@property (nonatomic, readonly, copy) NSNumber *propertyIndex;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyIdentifier:(id)arg1 value:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithPropertyIndex:(id)arg1 value:(id)arg2 type:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)propertyIdentifier;
- (id)propertyIndex;
- (unsigned long long)type;
- (id)value;

@end
