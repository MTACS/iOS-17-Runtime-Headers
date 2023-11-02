
@interface AMSPurchaseSIWA : AMSPurchase <NSCopying, NSSecureCoding> {
    AKAppleIDAuthenticationContext * _authenticationContext;
    NSString * _bundleID;
    NSString * _serviceID;
    NSString * _teamID;
}

@property (nonatomic, retain) AKAppleIDAuthenticationContext *authenticationContext;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *serviceID;
@property (nonatomic, copy) NSString *teamID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appProvidedData;
- (id)authenticationContext;
- (id)authenticationContextForRequest:(id)arg1;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchaseType:(long long)arg1 buyParams:(id)arg2;
- (id)serviceID;
- (void)setAuthenticationContext:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setTeamID:(id)arg1;
- (id)teamID;

@end
