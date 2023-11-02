
@interface BCSVisibilityItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _country;
    NSString * _language;
    double  _ratio;
}

@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) double ratio;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 country:(id)arg2 ratio:(double)arg3;
- (id)initWithVisibility:(id)arg1;
- (bool)isVisibleForDSID:(id)arg1;
- (id)language;
- (double)ratio;

@end
