
@interface _MRGroupSessionIdentityShareReplyMessageProtobuf : PBCodable <NSCopying> {
    _MRGroupSessionParticipantProtobuf * _leaderParticipant;
    _MRGroupSessionParticipantProtobuf * _localParticipant;
}

@property (nonatomic, readonly) bool hasLeaderParticipant;
@property (nonatomic, readonly) bool hasLocalParticipant;
@property (nonatomic, retain) _MRGroupSessionParticipantProtobuf *leaderParticipant;
@property (nonatomic, retain) _MRGroupSessionParticipantProtobuf *localParticipant;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLeaderParticipant;
- (bool)hasLocalParticipant;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)leaderParticipant;
- (id)localParticipant;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLeaderParticipant:(id)arg1;
- (void)setLocalParticipant:(id)arg1;
- (void)writeTo:(id)arg1;

@end
