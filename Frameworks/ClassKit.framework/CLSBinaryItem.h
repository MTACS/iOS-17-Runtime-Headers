
@interface CLSBinaryItem : CLSActivityItem {
    bool  _value;
    long long  _valueType;
}

@property (nonatomic) bool value;
@property (nonatomic) long long valueType;

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3;
- (void)setValue:(bool)arg1;
- (void)setValueType:(long long)arg1;
- (bool)value;
- (long long)valueType;

@end
