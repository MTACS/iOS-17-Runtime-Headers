
@interface AKAuthorizationUpgradeContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appID;
    NSString * _appName;
    NSString * _bundleID;
    NSString * _nonce;
    NSString * _serviceID;
    NSString * _state;
    NSString * _teamID;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, copy) NSString *serviceID;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *teamID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appID;
- (id)appName;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nonce;
- (id)serviceID;
- (void)setAppID:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTeamID:(id)arg1;
- (id)state;
- (id)teamID;

@end
