
@interface NNMKSyncedAccount : NSObject {
    NSString * _accountId;
    NSString * _defaultEmailAddress;
    NSString * _displayName;
    NSString * _emailAddressToken;
    NSArray * _emailAddresses;
    NSString * _localId;
    NSString * _pccEmailAddress;
    unsigned long long  _resendInterval;
    bool  _resendRequested;
    bool  _shouldArchive;
    unsigned long long  _sourceType;
    NSString * _typeIdentifier;
    NSString * _username;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *defaultEmailAddress;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *emailAddressToken;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSString *localId;
@property (nonatomic, retain) NSString *pccEmailAddress;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) bool resendRequested;
@property (nonatomic) bool shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic, retain) NSString *typeIdentifier;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)account;
- (id)accountId;
- (id)defaultEmailAddress;
- (id)displayName;
- (id)emailAddressToken;
- (id)emailAddresses;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)localId;
- (id)pccEmailAddress;
- (unsigned long long)resendInterval;
- (bool)resendRequested;
- (void)setAccountId:(id)arg1;
- (void)setDefaultEmailAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddressToken:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setLocalId:(id)arg1;
- (void)setPccEmailAddress:(id)arg1;
- (void)setResendInterval:(unsigned long long)arg1;
- (void)setResendRequested:(bool)arg1;
- (void)setShouldArchive:(bool)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldArchive;
- (unsigned long long)sourceType;
- (id)typeIdentifier;
- (id)username;

@end
