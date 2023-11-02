
@interface EDPETQuotaReachedEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {
    unsigned long long  _droppedEventsCount;
    struct { 
        unsigned int droppedEventsCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int timezoneOffset : 1; 
    }  _has;
    unsigned int  _sequenceNumber;
    unsigned long long  _timestamp;
    int  _timezoneOffset;
}

@property (nonatomic) unsigned long long droppedEventsCount;
@property (nonatomic) bool hasDroppedEventsCount;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTimezoneOffset;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int timezoneOffset;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)droppedEventsCount;
- (bool)hasDroppedEventsCount;
- (bool)hasSequenceNumber;
- (bool)hasTimestamp;
- (bool)hasTimezoneOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)messageFrameType;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequenceNumber;
- (void)setDroppedEventsCount:(unsigned long long)arg1;
- (void)setHasDroppedEventsCount:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTimezoneOffset:(bool)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTimezoneOffset:(int)arg1;
- (unsigned long long)timestamp;
- (int)timezoneOffset;
- (void)writeTo:(id)arg1;

@end
