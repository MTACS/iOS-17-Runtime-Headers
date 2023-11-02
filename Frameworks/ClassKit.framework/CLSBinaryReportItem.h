
@interface CLSBinaryReportItem : CLSActivityReportItem <NSCopying, NSSecureCoding> {
    bool  _value;
    long long  _valueType;
}

@property (nonatomic) bool value;
@property (nonatomic) long long valueType;

+ (bool)supportsSecureCoding;

- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)scalarMultiply:(double)arg1;
- (void)setValue:(bool)arg1;
- (void)setValueType:(long long)arg1;
- (bool)value;
- (long long)valueType;

@end
