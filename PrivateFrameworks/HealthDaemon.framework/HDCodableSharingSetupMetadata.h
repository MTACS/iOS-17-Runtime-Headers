
@interface HDCodableSharingSetupMetadata : PBCodable <NSCopying> {
    NSMutableArray * _invitationTokens;
    NSString * _ownerCloudKitEmailAddress;
    NSData * _ownerParticipant;
    NSData * _shareParticipant;
    NSData * _sourceProfileIdentifier;
    NSString * _syncCircleIdentifier;
}

@property (nonatomic, readonly) bool hasOwnerCloudKitEmailAddress;
@property (nonatomic, readonly) bool hasOwnerParticipant;
@property (nonatomic, readonly) bool hasShareParticipant;
@property (nonatomic, readonly) bool hasSourceProfileIdentifier;
@property (nonatomic, readonly) bool hasSyncCircleIdentifier;
@property (nonatomic, retain) NSMutableArray *invitationTokens;
@property (nonatomic, retain) NSString *ownerCloudKitEmailAddress;
@property (nonatomic, retain) NSData *ownerParticipant;
@property (nonatomic, retain) NSData *shareParticipant;
@property (nonatomic, retain) NSData *sourceProfileIdentifier;
@property (nonatomic, retain) NSString *syncCircleIdentifier;

+ (Class)invitationTokenType;

- (void).cxx_destruct;
- (void)addInvitationToken:(id)arg1;
- (void)clearInvitationTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOwnerCloudKitEmailAddress;
- (bool)hasOwnerParticipant;
- (bool)hasShareParticipant;
- (bool)hasSourceProfileIdentifier;
- (bool)hasSyncCircleIdentifier;
- (unsigned long long)hash;
- (id)invitationTokenAtIndex:(unsigned long long)arg1;
- (id)invitationTokens;
- (unsigned long long)invitationTokensCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerCloudKitEmailAddress;
- (id)ownerParticipant;
- (bool)readFrom:(id)arg1;
- (void)setInvitationTokens:(id)arg1;
- (void)setOwnerCloudKitEmailAddress:(id)arg1;
- (void)setOwnerParticipant:(id)arg1;
- (void)setShareParticipant:(id)arg1;
- (void)setSourceProfileIdentifier:(id)arg1;
- (void)setSyncCircleIdentifier:(id)arg1;
- (id)shareParticipant;
- (id)sourceProfileIdentifier;
- (id)syncCircleIdentifier;
- (void)writeTo:(id)arg1;

@end
