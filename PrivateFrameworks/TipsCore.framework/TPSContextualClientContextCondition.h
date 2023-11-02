
@interface TPSContextualClientContextCondition : TPSSerializableObject {
    NSString * _key;
    id  _value;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
