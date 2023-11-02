
@interface DMFInstallAppRequest : DMFAppRequest {
    bool  _allowFreePurchases;
    unsigned long long  _licenseType;
}

@property (nonatomic) bool allowFreePurchases;
@property (nonatomic) unsigned long long licenseType;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (bool)allowFreePurchases;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)licenseType;
- (void)setAllowFreePurchases:(bool)arg1;
- (void)setLicenseType:(unsigned long long)arg1;

@end
