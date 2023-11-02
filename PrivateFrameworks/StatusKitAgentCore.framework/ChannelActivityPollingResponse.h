
@interface ChannelActivityPollingResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int serverTimestampSeconds : 1; 
        unsigned int version : 1; 
        unsigned int responseMessageIndex : 1; 
        unsigned int status : 1; 
        unsigned int totalResponseMessages : 1; 
    }  _has;
    NSMutableArray * _participantPayloads;
    unsigned int  _responseMessageIndex;
    unsigned long long  _serverTimestampSeconds;
    int  _status;
    unsigned int  _totalResponseMessages;
    NSData * _uuid;
    unsigned long long  _version;
}

@property (nonatomic) bool hasResponseMessageIndex;
@property (nonatomic) bool hasServerTimestampSeconds;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTotalResponseMessages;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *participantPayloads;
@property (nonatomic) unsigned int responseMessageIndex;
@property (nonatomic) unsigned long long serverTimestampSeconds;
@property (nonatomic) int status;
@property (nonatomic) unsigned int totalResponseMessages;
@property (nonatomic, retain) NSData *uuid;
@property (nonatomic) unsigned long long version;

+ (Class)participantPayloadType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addParticipantPayload:(id)arg1;
- (void)clearParticipantPayloads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponseMessageIndex;
- (bool)hasServerTimestampSeconds;
- (bool)hasStatus;
- (bool)hasTotalResponseMessages;
- (bool)hasUuid;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;
- (id)participantPayloads;
- (unsigned long long)participantPayloadsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)responseMessageIndex;
- (unsigned long long)serverTimestampSeconds;
- (void)setHasResponseMessageIndex:(bool)arg1;
- (void)setHasServerTimestampSeconds:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTotalResponseMessages:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setParticipantPayloads:(id)arg1;
- (void)setResponseMessageIndex:(unsigned int)arg1;
- (void)setServerTimestampSeconds:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setTotalResponseMessages:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (unsigned int)totalResponseMessages;
- (id)uuid;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
