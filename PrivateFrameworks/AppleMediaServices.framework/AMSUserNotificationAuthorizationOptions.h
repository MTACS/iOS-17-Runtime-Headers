
@interface AMSUserNotificationAuthorizationOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _authorizationOptions;
    NSDictionary * _metricsOverlay;
    bool  _userInitiated;
}

@property (nonatomic) unsigned long long authorizationOptions;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (nonatomic) bool userInitiated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)authorizationOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptionsDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metricsOverlay;
- (id)optionsDictionary;
- (void)setAuthorizationOptions:(unsigned long long)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)userInitiated;

@end
