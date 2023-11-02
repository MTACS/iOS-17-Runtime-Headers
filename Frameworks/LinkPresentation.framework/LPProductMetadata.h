
@interface LPProductMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _pluralTitle;
    NSArray * _prices;
}

@property (nonatomic, copy) NSString *pluralTitle;
@property (nonatomic, copy) NSArray *prices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pluralTitle;
- (id)prices;
- (void)setPluralTitle:(id)arg1;
- (void)setPrices:(id)arg1;

@end
