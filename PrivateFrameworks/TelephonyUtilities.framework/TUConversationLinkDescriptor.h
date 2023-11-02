
@interface TUConversationLinkDescriptor : NSObject <NSCopying, NSSecureCoding> {
    bool  _activated;
    NSDate * _creationDate;
    NSDate * _deletionDate;
    NSDate * _expirationDate;
    NSUUID * _groupUUID;
    NSSet * _invitedHandles;
    long long  _linkLifetimeScope;
    NSString * _name;
    TUConversationLinkOriginator * _originator;
    NSData * _privateKey;
    NSString * _pseudonym;
    NSData * _publicKey;
    int  _version;
}

@property (getter=isActivated, nonatomic) bool activated;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSDate *deletionDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSUUID *groupUUID;
@property (nonatomic, copy) NSSet *invitedHandles;
@property (nonatomic) long long linkLifetimeScope;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TUConversationLinkOriginator *originator;
@property (nonatomic, copy) NSData *privateKey;
@property (nonatomic, copy) NSString *pseudonym;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic) int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)deletionDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)groupUUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationLinkDescriptor:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 originator:(id)arg2 pseudonym:(id)arg3 publicKey:(id)arg4;
- (id)invitedHandles;
- (bool)isActivated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationLinkDescriptor:(id)arg1;
- (long long)linkLifetimeScope;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)originator;
- (id)privateKey;
- (id)pseudonym;
- (id)publicKey;
- (void)setActivated:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setInvitedHandles:(id)arg1;
- (void)setLinkLifetimeScope:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)setPrivateKey:(id)arg1;
- (void)setPseudonym:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;

@end
