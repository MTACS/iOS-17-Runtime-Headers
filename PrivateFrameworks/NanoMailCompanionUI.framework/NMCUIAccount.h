
@interface NMCUIAccount : NSObject {
    ACAccount * _acAccount;
    NNMKAccount * _nnmkAccount;
}

@property (retain) ACAccount *acAccount;
@property (readonly) NSString *accountTypeIdentifier;
@property (nonatomic, readonly) bool directPushNotificationsSupported;
@property (readonly) NSString *displayName;
@property (readonly) NSString *emailAddress;
@property (nonatomic, readonly) bool enabled;
@property (readonly) NSString *identifier;
@property (retain) NNMKAccount *nnmkAccount;
@property (readonly) NSString *username;

- (void).cxx_destruct;
- (bool)_isIcloud;
- (id)acAccount;
- (id)accountTypeIdentifier;
- (bool)directPushNotificationsSupported;
- (id)displayName;
- (id)emailAddress;
- (bool)enabled;
- (id)identifier;
- (id)initWithACAccount:(id)arg1;
- (id)initWithNNMKAccount:(id)arg1;
- (id)nnmkAccount;
- (id)rootAccount:(id)arg1;
- (void)setAcAccount:(id)arg1;
- (void)setNnmkAccount:(id)arg1;
- (id)username;

@end
