
@interface StorefrontInfo : NSObject <NSSecureCoding> {
    NSString * _countryCode;
    NSString * _identifier;
    NSLocale * _locale;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSLocale *locale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)countryCode;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 countryCode:(id)arg2 locale:(id)arg3;
- (id)locale;

@end
