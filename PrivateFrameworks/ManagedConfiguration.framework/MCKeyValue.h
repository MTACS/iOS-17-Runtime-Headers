
@interface MCKeyValue : NSObject <NSSecureCoding> {
    NSString * _key;
    id  _value;
    unsigned long long  _valueType;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) id value;
@property (nonatomic) unsigned long long valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 localizedKey:(id)arg2;
- (id)initWithDate:(id)arg1 localizedKey:(id)arg2;
- (id)initWithLocalizedArray:(id)arg1 localizedKey:(id)arg2;
- (id)initWithLocalizedString:(id)arg1 localizedKey:(id)arg2;
- (id)initWithValue:(id)arg1 localizedKey:(id)arg2;
- (bool)isStringValue;
- (id)key;
- (void)setData:(id)arg1 localizedKey:(id)arg2;
- (void)setDate:(id)arg1 localizedKey:(id)arg2;
- (void)setLocalizedArray:(id)arg1 localizedKey:(id)arg2;
- (void)setLocalizedString:(id)arg1 localizedKey:(id)arg2;
- (void)setValue:(id)arg1 localizedKey:(id)arg2;
- (void)setValueType:(unsigned long long)arg1;
- (id)value;
- (unsigned long long)valueType;

@end
