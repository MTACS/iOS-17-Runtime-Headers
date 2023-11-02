
@interface TPSContextualDuetEventValue : TPSSerializableObject {
    NSNumber * _boolValue;
    NSNumber * _doubleValue;
    NSNumber * _integerValue;
    NSString * _stringValue;
    unsigned long long  _valueType;
}

@property (nonatomic, copy) NSNumber *boolValue;
@property (nonatomic, copy) NSNumber *doubleValue;
@property (nonatomic, copy) NSNumber *integerValue;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic) unsigned long long valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)integerValue;
- (void)setBoolValue:(id)arg1;
- (void)setDoubleValue:(id)arg1;
- (void)setIntegerValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValueType:(unsigned long long)arg1;
- (id)stringValue;
- (unsigned long long)valueType;

@end
