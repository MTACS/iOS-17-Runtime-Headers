
@interface AKPrivateEmailContext : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _clientAppBundleId;
    NSString * _key;
    bool  _keyAndBundleIdAreHashed;
    NSString * _metadataString;
    NSString * _originIdentifier;
    NSString * _originType;
    NSString * _proxiedAppID;
    NSString * _proxiedAppName;
    NSString * _proxiedBundleIdentifier;
    NSString * _upgradeBundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *clientAppBundleId;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic) bool keyAndBundleIdAreHashed;
@property (nonatomic, copy) NSString *metadataString;
@property (nonatomic, readonly) NSString *originIdentifier;
@property (nonatomic, readonly) NSString *originType;
@property (nonatomic, copy) NSString *proxiedAppID;
@property (nonatomic, copy) NSString *proxiedAppName;
@property (nonatomic, copy) NSString *proxiedBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *upgradeBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)clientAppBundleId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 bundleID:(id)arg2;
- (id)initWithContext:(id)arg1 client:(id)arg2;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 altDSID:(id)arg2;
- (id)initWithKey:(id)arg1 altDSID:(id)arg2 clientAppBundleId:(id)arg3;
- (id)initWithKey:(id)arg1 altDSID:(id)arg2 originType:(id)arg3 originIdentifier:(id)arg4;
- (id)key;
- (bool)keyAndBundleIdAreHashed;
- (id)metadataString;
- (id)originIdentifier;
- (id)originType;
- (id)proxiedAppID;
- (id)proxiedAppName;
- (id)proxiedBundleIdentifier;
- (void)sanitiseInternalState;
- (void)setClientAppBundleId:(id)arg1;
- (void)setKeyAndBundleIdAreHashed:(bool)arg1;
- (void)setMetadataString:(id)arg1;
- (void)setProxiedAppID:(id)arg1;
- (void)setProxiedAppName:(id)arg1;
- (void)setProxiedBundleIdentifier:(id)arg1;
- (id)upgradeBundleIdentifier;

@end
