
@interface CNTCCAppAuthorizationRecord : NSObject {
    long long  _authorizationStatus;
    NSString * _bundleIdentifier;
    NSString * _localizedName;
    long long  _recordType;
}

@property (nonatomic) long long authorizationStatus;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) long long recordType;

+ (unsigned long long)authorizationRightFromAuthorizationStatus:(long long)arg1;
+ (long long)authorizationStatusFromAuthorizationRight:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)authorizationStatus;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 localizedName:(id)arg2 recordType:(long long)arg3 authorizationStatus:(long long)arg4;
- (id)initWithTCCAuthorizationRecord:(id)arg1;
- (id)localizedName;
- (long long)recordType;
- (void)setAuthorizationStatus:(long long)arg1;

@end
