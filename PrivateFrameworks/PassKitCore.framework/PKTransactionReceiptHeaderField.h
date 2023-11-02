
@interface PKTransactionReceiptHeaderField : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    NSString * _label;
    NSString * _value;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransactionReceiptHeaderField:(id)arg1;
- (id)key;
- (id)label;
- (void)setKey:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
