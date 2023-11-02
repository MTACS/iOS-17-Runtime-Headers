
@interface ChannelActivityUpdatePayload : PBCodable <NSCopying> {
    struct { 
        unsigned int updateType : 1; 
    }  _has;
    NSData * _padding;
    NSMutableArray * _participantPayloads;
    int  _updateType;
}

@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic) bool hasUpdateType;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic, retain) NSMutableArray *participantPayloads;
@property (nonatomic) int updateType;

+ (Class)participantPayloadType;

- (void).cxx_destruct;
- (int)StringAsUpdateType:(id)arg1;
- (void)addParticipantPayload:(id)arg1;
- (void)clearParticipantPayloads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPadding;
- (bool)hasUpdateType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)padding;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;
- (id)participantPayloads;
- (unsigned long long)participantPayloadsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasUpdateType:(bool)arg1;
- (void)setPadding:(id)arg1;
- (void)setParticipantPayloads:(id)arg1;
- (void)setUpdateType:(int)arg1;
- (int)updateType;
- (id)updateTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
