
@interface LNQueryParameterComparatorMetadata : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _comparatorType;
    NSArray * _resolvableInputTypes;
    LNValueType * _valueType;
}

@property (nonatomic, readonly) unsigned long long comparatorType;
@property (nonatomic, readonly, copy) NSArray *resolvableInputTypes;
@property (nonatomic, readonly, copy) LNValueType *valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)comparatorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComparatorType:(unsigned long long)arg1 valueType:(id)arg2 resolvableInputTypes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)resolvableInputTypes;
- (id)valueType;

@end
