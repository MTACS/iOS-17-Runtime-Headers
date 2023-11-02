
@interface AWDSafariDidTerminateWebProcessBeforeNavigation : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int terminationReason : 1; 
    }  _has;
    int  _terminationReason;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTerminationReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int terminationReason;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsTerminationReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTerminationReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTerminationReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTerminationReason:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)terminationReason;
- (id)terminationReasonAsString:(int)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
