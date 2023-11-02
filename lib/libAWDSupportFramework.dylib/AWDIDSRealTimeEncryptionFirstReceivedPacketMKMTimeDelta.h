
@interface AWDIDSRealTimeEncryptionFirstReceivedPacketMKMTimeDelta : PBCodable <NSCopying> {
    unsigned int  _activeParticipantBucket;
    struct { 
        unsigned int timeDelta : 1; 
        unsigned int timestamp : 1; 
        unsigned int activeParticipantBucket : 1; 
    }  _has;
    NSString * _serviceName;
    long long  _timeDelta;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int activeParticipantBucket;
@property (nonatomic) bool hasActiveParticipantBucket;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic) bool hasTimeDelta;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic) long long timeDelta;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)activeParticipantBucket;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveParticipantBucket;
- (bool)hasServiceName;
- (bool)hasTimeDelta;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceName;
- (void)setActiveParticipantBucket:(unsigned int)arg1;
- (void)setHasActiveParticipantBucket:(bool)arg1;
- (void)setHasTimeDelta:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setServiceName:(id)arg1;
- (void)setTimeDelta:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeDelta;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
