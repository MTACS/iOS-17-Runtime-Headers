
@interface TUConversationLink : NSObject <NSCopying, NSSecureCoding> {
    NSString * _URLFragment;
    NSDate * _creationDate;
    NSDate * _deletionDate;
    NSDate * _expirationDate;
    NSUUID * _groupUUID;
    NSSet * _invitedMemberHandles;
    long long  _linkLifetimeScope;
    NSString * _linkName;
    bool  _locallyCreated;
    TUHandle * _originatorHandle;
    NSString * _pseudonym;
    NSData * _publicKey;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) NSString *URLFragment;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSDate *deletionDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSUUID *groupUUID;
@property (nonatomic, copy) NSSet *invitedMemberHandles;
@property (nonatomic) long long linkLifetimeScope;
@property (nonatomic, copy) NSString *linkName;
@property (getter=isLocallyCreated, nonatomic) bool locallyCreated;
@property (nonatomic, retain) TUHandle *originatorHandle;
@property (nonatomic, copy) NSString *pseudonym;
@property (nonatomic, copy) NSData *publicKey;

+ (id)baseURLComponentsForURL:(id)arg1;
+ (id)baseURLStrings;
+ (id)baseURLs;
+ (bool)checkMatchingConversationLinkCriteriaForURL:(id)arg1;
+ (id)conversationLinkComponentsFromURL:(id)arg1;
+ (id)conversationLinkForURL:(id)arg1;
+ (unsigned long long)conversationLinkVersion;
+ (id)preferredBaseURL;
+ (id)preferredBaseURLString;
+ (id)prefixedPseudonymFor:(id)arg1;
+ (id)publicKeyForBase64EncodedString:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)userConfiguration;

- (void).cxx_destruct;
- (id)URL;
- (id)URLFragment;
- (id)base64PublicKey;
- (bool)canCreateConversations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)deletionDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)groupUUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithPseudonym:(id)arg1 publicKey:(id)arg2 groupUUID:(id)arg3 originatorHandle:(id)arg4;
- (id)initWithPseudonym:(id)arg1 publicKey:(id)arg2 groupUUID:(id)arg3 originatorHandle:(id)arg4 creationDate:(id)arg5 deletionDate:(id)arg6 expirationDate:(id)arg7 invitedMemberHandles:(id)arg8 locallyCreated:(bool)arg9 linkName:(id)arg10 linkLifetimeScope:(long long)arg11;
- (id)invitedMemberHandles;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationLink:(id)arg1;
- (bool)isEquivalentToConversationLink:(id)arg1;
- (bool)isEquivalentToPseudonym:(id)arg1 andPublicKey:(id)arg2;
- (bool)isLocallyCreated;
- (long long)linkLifetimeScope;
- (id)linkName;
- (id)originatorHandle;
- (id)pseudonym;
- (id)publicKey;
- (void)setCreationDate:(id)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setInvitedMemberHandles:(id)arg1;
- (void)setLinkLifetimeScope:(long long)arg1;
- (void)setLinkName:(id)arg1;
- (void)setLocallyCreated:(bool)arg1;
- (void)setOriginatorHandle:(id)arg1;
- (void)setPseudonym:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setURLFragment:(id)arg1;
- (id)unprefixedPseudonym;
- (id)valueForKey:(id)arg1;

@end
