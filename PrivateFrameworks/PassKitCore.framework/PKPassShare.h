
@interface PKPassShare : NSObject <NSCopying, NSSecureCoding> {
    PKPassShareActivationOptions * _activationOptions;
    NSDate * _creationDate;
    NSArray * _credentialShares;
    NSArray * _displayableSharedEntitlements;
    NSString * _groupIdentifier;
    NSString * _identifier;
    unsigned long long  _manageability;
    NSString * _recipientHandle;
    NSString * _recipientNickname;
    NSString * _senderShareIdentifier;
    NSArray * _sharedEntitlements;
    unsigned long long  _status;
    NSString * _subcredentialIdentifier;
}

@property (nonatomic, retain) PKPassShareActivationOptions *activationOptions;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSArray *credentialShares;
@property (nonatomic, retain) NSArray *displayableSharedEntitlements;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic, readonly) bool isLocalShare;
@property (nonatomic, readonly) bool isRevokable;
@property (nonatomic) unsigned long long manageability;
@property (nonatomic, readonly) unsigned long long mostRestrictiveShareability;
@property (nonatomic, retain) NSString *recipientHandle;
@property (nonatomic, retain) NSString *recipientNickname;
@property (nonatomic, retain) NSString *senderShareIdentifier;
@property (nonatomic, retain) NSArray *sharedEntitlements;
@property (nonatomic) unsigned long long status;
@property (nonatomic, retain) NSString *subcredentialIdentifier;
@property (nonatomic, readonly) NSUUID *uuidIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationOptions;
- (void)addCredentialShare:(id)arg1;
- (bool)appendCredentialShareDictionary:(id)arg1 entitlements:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)credentialShares;
- (id)description;
- (id)displayableSharedEntitlements;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isLocalShare;
- (bool)isRevokable;
- (bool)isSameUnderlyingShareAs:(id)arg1;
- (unsigned long long)manageability;
- (unsigned long long)mostRestrictiveShareability;
- (id)recipientHandle;
- (id)recipientNickname;
- (id)senderShareIdentifier;
- (void)setActivationOptions:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCredentialShares:(id)arg1;
- (void)setDisplayableSharedEntitlements:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManageability:(unsigned long long)arg1;
- (void)setRecipientHandle:(id)arg1;
- (void)setRecipientNickname:(id)arg1;
- (void)setSenderShareIdentifier:(id)arg1;
- (void)setSharedEntitlements:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setSubcredentialIdentifier:(id)arg1;
- (id)sharedEntitlements;
- (unsigned long long)status;
- (id)subcredentialIdentifier;
- (void)updateDisplayableSharedEntitlementsFromDisplayableEntitlements:(id)arg1;
- (id)uuidIdentifier;

@end
