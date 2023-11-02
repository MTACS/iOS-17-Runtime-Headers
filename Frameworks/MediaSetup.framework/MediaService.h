
@interface MediaService : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountName;
    NSArray * _alternateBundleIdentifiers;
    CMSAuthenticationConfiguration * _authConfiguration;
    CMSAuthenticationCredential * _authCredential;
    bool  _authFatalError;
    NSString * _bundleIdentifier;
    NSData * _configAsset;
    NSString * _configETag;
    NSString * _configPublicKey;
    NSURL * _configURL;
    NSURL * _iconImageURL;
    NSURL * _remoteIconURL;
    NSUUID * _serviceID;
    NSString * _serviceName;
    bool  _serviceRemovable;
    NSString * _serviceType;
    bool  _updateListeningHistoryEnabled;
}

@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, retain) NSArray *alternateBundleIdentifiers;
@property (nonatomic, retain) CMSAuthenticationConfiguration *authConfiguration;
@property (nonatomic, retain) CMSAuthenticationCredential *authCredential;
@property (nonatomic) bool authFatalError;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSData *configAsset;
@property (nonatomic, copy) NSString *configETag;
@property (nonatomic, copy) NSString *configPublicKey;
@property (nonatomic, retain) NSURL *configURL;
@property (nonatomic, retain) NSURL *iconImageURL;
@property (nonatomic, retain) NSURL *remoteIconURL;
@property (nonatomic, copy) NSUUID *serviceID;
@property (nonatomic, copy) NSString *serviceName;
@property (getter=isServiceRemovable, nonatomic) bool serviceRemovable;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic) bool updateListeningHistoryEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_failWithError:(unsigned long long)arg1 errorString:(id)arg2;
- (id)accountName;
- (id)alternateBundleIdentifiers;
- (id)authConfiguration;
- (id)authCredential;
- (bool)authFatalError;
- (id)basicPropertiesDictionary;
- (id)bundleIdentifier;
- (id)configAsset;
- (id)configETag;
- (id)configPublicKey;
- (id)configURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconImageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaServiceIdentifier:(id)arg1;
- (id)initWithServiceAccount:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (bool)isServiceRemovable;
- (id)jsonDictionary;
- (id)remoteIconURL;
- (id)serviceID;
- (id)serviceName;
- (id)serviceType;
- (void)setAccountName:(id)arg1;
- (void)setAlternateBundleIdentifiers:(id)arg1;
- (void)setAuthConfiguration:(id)arg1;
- (void)setAuthCredential:(id)arg1;
- (void)setAuthFatalError:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setConfigAsset:(id)arg1;
- (void)setConfigETag:(id)arg1;
- (void)setConfigPublicKey:(id)arg1;
- (void)setConfigURL:(id)arg1;
- (void)setIconImageURL:(id)arg1;
- (void)setRemoteIconURL:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceRemovable:(bool)arg1;
- (void)setServiceType:(id)arg1;
- (void)setUpdateListeningHistoryEnabled:(bool)arg1;
- (bool)updateListeningHistoryEnabled;

@end
