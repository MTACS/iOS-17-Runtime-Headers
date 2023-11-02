
@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    unsigned long long  _options;
    NSString * _redemptionCode;
    unsigned long long  _state;
    NSString * _unusedRedemptionCode;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSString *redemptionCode;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) NSString *unusedRedemptionCode;

+ (id)stringForState:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)options;
- (id)redemptionCode;
- (void)setDisplayName:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRedemptionCode:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnusedRedemptionCode:(id)arg1;
- (unsigned long long)state;
- (id)unusedRedemptionCode;

@end
