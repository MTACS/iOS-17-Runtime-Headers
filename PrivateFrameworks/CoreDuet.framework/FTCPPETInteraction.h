
@interface FTCPPETInteraction : PBCodable <NSCopying> {
    NSString * _duration;
    bool  _isInbound;
    NSString * _mechanism;
    NSMutableArray * _participants;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *duration;
@property (nonatomic) bool isInbound;
@property (nonatomic, retain) NSString *mechanism;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic) unsigned long long timestamp;

+ (Class)participantsType;

- (void).cxx_destruct;
- (void)addParticipants:(id)arg1;
- (void)clearParticipants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInbound;
- (id)mechanism;
- (void)mergeFrom:(id)arg1;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setIsInbound:(bool)arg1;
- (void)setMechanism:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
