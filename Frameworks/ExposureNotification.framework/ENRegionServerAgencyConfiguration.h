
@interface ENRegionServerAgencyConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _agencyColor;
    NSURL * _agencyFAQWebsiteURL;
    unsigned long long  _agencyHeaderStyle;
    NSArray * _agencyHeaderTextColor;
    NSString * _agencyImageURL;
    NSURL * _agencyWebsiteURL;
    ENRegionServerAgencyLocalizedConfiguration * _localizedConfiguration;
    ENRegion * _region;
    NSURL * _revokedClassificationURL;
    NSURL * _verificationCodeLearnMoreURL;
    NSURL * _webReportURL;
}

@property (nonatomic, copy) NSArray *agencyColor;
@property (nonatomic, readonly, copy) NSString *agencyDisplayName;
@property (nonatomic, readonly, copy) NSURL *agencyFAQWebsiteURL;
@property (nonatomic) unsigned long long agencyHeaderStyle;
@property (nonatomic, copy) NSArray *agencyHeaderTextColor;
@property (nonatomic, copy) NSString *agencyImageURL;
@property (nonatomic, readonly, copy) NSURL *agencyWebsiteURL;
@property (nonatomic, copy) ENRegionServerAgencyLocalizedConfiguration *localizedConfiguration;
@property (nonatomic, readonly, copy) ENRegion *region;
@property (nonatomic, readonly, copy) NSURL *revokedClassificationURL;
@property (nonatomic, readonly, copy) NSURL *verificationCodeLearnMoreURL;
@property (nonatomic, readonly, copy) NSURL *webReportURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)agencyColor;
- (id)agencyDisplayName;
- (id)agencyFAQWebsiteURL;
- (unsigned long long)agencyHeaderStyle;
- (id)agencyHeaderTextColor;
- (id)agencyImageURL;
- (id)agencyWebsiteURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1 locale:(id)arg2;
- (id)localizedConfiguration;
- (id)region;
- (id)revokedClassificationURL;
- (void)setAgencyColor:(id)arg1;
- (void)setAgencyHeaderStyle:(unsigned long long)arg1;
- (void)setAgencyHeaderTextColor:(id)arg1;
- (void)setAgencyImageURL:(id)arg1;
- (void)setLocalizedConfiguration:(id)arg1;
- (id)verificationCodeLearnMoreURL;
- (id)webReportURL;

@end
