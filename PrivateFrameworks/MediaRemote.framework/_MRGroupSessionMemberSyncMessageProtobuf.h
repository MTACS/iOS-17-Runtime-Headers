
@interface _MRGroupSessionMemberSyncMessageProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _members;
    NSMutableArray * _participants;
}

@property (nonatomic, retain) NSMutableArray *members;
@property (nonatomic, retain) NSMutableArray *participants;

+ (Class)membersType;
+ (Class)participantsType;

- (void).cxx_destruct;
- (void)addMembers:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)clearMembers;
- (void)clearParticipants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)members;
- (id)membersAtIndex:(unsigned long long)arg1;
- (unsigned long long)membersCount;
- (void)mergeFrom:(id)arg1;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (void)setMembers:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)writeTo:(id)arg1;

@end
