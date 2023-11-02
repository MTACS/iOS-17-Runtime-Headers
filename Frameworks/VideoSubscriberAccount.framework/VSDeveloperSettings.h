
@interface VSDeveloperSettings : NSObject <NSSecureCoding> {
    bool  _cacheBusterEnabled;
    bool  _isInSetTopBoxMode;
    bool  _requestTimeoutsDisabled;
    NSString * _setTopBoxBundleIdentifier;
    NSString * _setTopBoxIdentityProviderID;
    bool  _setTopBoxSupportsOptOut;
    bool  _setTopBoxUseDeviceProfile;
    NSString * _setTopBoxUserToken;
    bool  _simulateExpiredToken;
}

@property (nonatomic) bool cacheBusterEnabled;
@property (nonatomic) bool isInSetTopBoxMode;
@property (nonatomic) bool requestTimeoutsDisabled;
@property (nonatomic, copy) NSString *setTopBoxBundleIdentifier;
@property (nonatomic, copy) NSString *setTopBoxIdentityProviderID;
@property (nonatomic) bool setTopBoxSupportsOptOut;
@property (nonatomic) bool setTopBoxUseDeviceProfile;
@property (nonatomic, copy) NSString *setTopBoxUserToken;
@property (nonatomic) bool simulateExpiredToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cacheBusterEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInSetTopBoxMode;
- (bool)requestTimeoutsDisabled;
- (void)setCacheBusterEnabled:(bool)arg1;
- (void)setDefaults;
- (void)setIsInSetTopBoxMode:(bool)arg1;
- (void)setRequestTimeoutsDisabled:(bool)arg1;
- (void)setSetTopBoxBundleIdentifier:(id)arg1;
- (void)setSetTopBoxIdentityProviderID:(id)arg1;
- (void)setSetTopBoxSupportsOptOut:(bool)arg1;
- (void)setSetTopBoxUseDeviceProfile:(bool)arg1;
- (void)setSetTopBoxUserToken:(id)arg1;
- (void)setSimulateExpiredToken:(bool)arg1;
- (id)setTopBoxBundleIdentifier;
- (id)setTopBoxIdentityProviderID;
- (bool)setTopBoxSupportsOptOut;
- (bool)setTopBoxUseDeviceProfile;
- (id)setTopBoxUserToken;
- (bool)simulateExpiredToken;

@end
