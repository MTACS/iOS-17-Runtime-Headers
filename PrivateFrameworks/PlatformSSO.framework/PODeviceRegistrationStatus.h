
@interface PODeviceRegistrationStatus : NSObject <NSSecureCoding> {
    NSString * _accountName;
    long long  _actionButtonAction;
    bool  _actionButtonEnabled;
    long long  _deviceRegistrationStatus;
    bool  _platformSSOEnabled;
    NSString * _registeredBundleIdentifier;
    NSString * _registeredExtensionName;
}

@property (nonatomic, retain) NSString *accountName;
@property (nonatomic) long long actionButtonAction;
@property (getter=isActionButtonEnabled, nonatomic) bool actionButtonEnabled;
@property (nonatomic) long long deviceRegistrationStatus;
@property (getter=isPlatformSSOEnabled, nonatomic) bool platformSSOEnabled;
@property (nonatomic, retain) NSString *registeredBundleIdentifier;
@property (nonatomic, retain) NSString *registeredExtensionName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountName;
- (long long)actionButtonAction;
- (id)description;
- (long long)deviceRegistrationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isActionButtonEnabled;
- (bool)isPlatformSSOEnabled;
- (id)registeredBundleIdentifier;
- (id)registeredExtensionName;
- (void)setAccountName:(id)arg1;
- (void)setActionButtonAction:(long long)arg1;
- (void)setActionButtonEnabled:(bool)arg1;
- (void)setDeviceRegistrationStatus:(long long)arg1;
- (void)setPlatformSSOEnabled:(bool)arg1;
- (void)setRegisteredBundleIdentifier:(id)arg1;
- (void)setRegisteredExtensionName:(id)arg1;

@end
