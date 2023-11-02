
@interface LPPriceMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _amount;
    NSString * _currency;
}

@property (nonatomic, copy) NSString *amount;
@property (nonatomic, copy) NSString *currency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;

@end
