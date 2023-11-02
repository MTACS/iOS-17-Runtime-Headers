
@interface AWDSOSTriggered : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int triggerMechanism : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _triggerMechanism;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTriggerMechanism;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int triggerMechanism;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasTriggerMechanism;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTriggerMechanism:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerMechanism:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)triggerMechanism;
- (void)writeTo:(id)arg1;

@end
