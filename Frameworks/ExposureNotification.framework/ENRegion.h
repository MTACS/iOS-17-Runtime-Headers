
@interface ENRegion : NSObject <NSCopying, NSSecureCoding> {
    NSString * _countryCode;
    NSString * _subdivisionCode;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) NSString *regionCode;
@property (nonatomic, readonly, copy) NSString *subdivisionCode;

+ (id)regionFromServerResponseDictionary:(id)arg1;
+ (id)regionWithCode:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)validSubdivisionCode:(id)arg1 forCountryCode:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountryCode:(id)arg1;
- (id)initWithCountryCode:(id)arg1 subdivisionCode:(id)arg2;
- (bool)isCountryCodeEqualToRegion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSubdivisionCodeEqualToRegion:(id)arg1;
- (id)regionCode;
- (id)subdivisionCode;
- (bool)validSubdivisionCode;

@end
