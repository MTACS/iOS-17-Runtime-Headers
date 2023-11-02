
@interface VSAccount : NSObject <NSSecureCoding> {
    NSString * _accountDescription;
    VSAccountStore * _accountStore;
    NSString * _accountTypeDescription;
    VSOptional * _authenticationToken;
    NSData * _channelsData;
    VSOptional * _identityProviderID;
    VSKeychainGenericPassword * _keychainItem;
    NSNumber * _legacyItemHash;
    VSKeychainGenericPassword * _legacyKeychainItem;
    VSOptional * _optionalIdentityProviderDisplayName;
    NSString * _preferredAppID;
    bool  _synchronizable;
    NSString * _username;
    unsigned long long  _version;
}

@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic) VSAccountStore *accountStore;
@property (nonatomic, copy) NSString *accountTypeDescription;
@property (nonatomic, retain) VSOptional *authenticationToken;
@property (nonatomic, retain) NSData *channelsData;
@property (nonatomic, readonly) NSString *identityProviderDisplayName;
@property (nonatomic, retain) VSOptional *identityProviderID;
@property (nonatomic, retain) VSKeychainGenericPassword *keychainItem;
@property (nonatomic, retain) NSNumber *legacyItemHash;
@property (nonatomic, retain) VSKeychainGenericPassword *legacyKeychainItem;
@property (nonatomic, retain) VSOptional *optionalIdentityProviderDisplayName;
@property (nonatomic, copy) NSString *preferredAppID;
@property (getter=isSynchronizable, nonatomic) bool synchronizable;
@property (nonatomic, copy) NSString *username;
@property (nonatomic) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountStore;
- (id)accountTypeDescription;
- (id)authenticationToken;
- (id)channelsData;
- (unsigned long long)contentsHash;
- (id)description;
- (id)effectiveModificationDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identityProviderDisplayName;
- (id)identityProviderID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSynchronizable;
- (id)keychainItem;
- (id)legacyItemHash;
- (id)legacyKeychainItem;
- (id)optionalIdentityProviderDisplayName;
- (id)preferredAppID;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setChannelsData:(id)arg1;
- (void)setIdentityProviderID:(id)arg1;
- (void)setKeychainItem:(id)arg1;
- (void)setLegacyItemHash:(id)arg1;
- (void)setLegacyKeychainItem:(id)arg1;
- (void)setOptionalIdentityProviderDisplayName:(id)arg1;
- (void)setPreferredAppID:(id)arg1;
- (void)setSynchronizable:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)username;
- (unsigned long long)version;

@end
