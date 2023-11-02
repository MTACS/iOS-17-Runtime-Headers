
@interface ASDBetaAppDisplayNames : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _localizedNames;
    NSString * _primaryLocale;
}

@property (copy) NSDictionary *localizedNames;
@property (copy) NSString *primaryLocale;

+ (id)displayNameWithLocalizedNames:(id)arg1 andPrimaryLocale:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedNames;
- (id)primaryLocale;
- (void)setLocalizedNames:(id)arg1;
- (void)setPrimaryLocale:(id)arg1;

@end
