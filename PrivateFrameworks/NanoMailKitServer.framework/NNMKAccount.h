
@interface NNMKAccount : NSObject <NSSecureCoding> {
    NSString * _accountId;
    NSString * _defaultEmailAddress;
    NSString * _displayName;
    NSString * _emailAddressToken;
    NSArray * _emailAddresses;
    NSString * _localId;
    NSArray * _mailboxes;
    NSString * _parentAccountIdentifier;
    NSString * _pccEmailAddress;
    bool  _shouldArchive;
    unsigned long long  _sourceType;
    unsigned long long  _standaloneState;
    NSString * _typeIdentifier;
    NSString * _username;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, copy) NSString *defaultEmailAddress;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *emailAddressToken;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSString *localId;
@property (nonatomic, retain) NSArray *mailboxes;
@property (nonatomic, retain) NSString *parentAccountIdentifier;
@property (nonatomic, retain) NSString *pccEmailAddress;
@property (nonatomic) bool shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long standaloneState;
@property (nonatomic, retain) NSString *typeIdentifier;
@property (nonatomic, retain) NSString *username;

+ (id)generateAccountIdForAccount:(id)arg1;
+ (id)generateIdentifierFromEmailsAddresses:(id)arg1;
+ (id)inboxesFromAccounts:(id)arg1;
+ (bool)isiCloudEmailAddress:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isGmail;
- (bool)_isHotmail;
- (bool)_isiCloud;
- (id)accountId;
- (bool)areStandaloneNotificationsEnabledWithCloudNotificationsEnabled:(bool)arg1;
- (id)defaultEmailAddress;
- (id)description;
- (bool)directPushNotificationsSupported;
- (id)displayName;
- (id)emailAddressToken;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localId;
- (id)mailboxes;
- (bool)maySupportStandaloneMode;
- (id)parentAccountIdentifier;
- (id)pccEmailAddress;
- (void)setAccountId:(id)arg1;
- (void)setDefaultEmailAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddressToken:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setLocalId:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setParentAccountIdentifier:(id)arg1;
- (void)setPccEmailAddress:(id)arg1;
- (void)setShouldArchive:(bool)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setStandaloneState:(unsigned long long)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldArchive;
- (unsigned long long)sourceType;
- (unsigned long long)standaloneState;
- (bool)supportsCloudNotifications;
- (id)typeIdentifier;
- (id)username;

@end
