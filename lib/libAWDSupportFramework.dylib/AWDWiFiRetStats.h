
@interface AWDWiFiRetStats : PBCodable <NSCopying> {
    struct { 
        unsigned int retDuration : 1; 
        unsigned int rxDuration : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _retDuration;
    unsigned long long  _rxDuration;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRetDuration;
@property (nonatomic) bool hasRxDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long retDuration;
@property (nonatomic) unsigned long long rxDuration;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRetDuration;
- (bool)hasRxDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)retDuration;
- (unsigned long long)rxDuration;
- (void)setHasRetDuration:(bool)arg1;
- (void)setHasRxDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRetDuration:(unsigned long long)arg1;
- (void)setRxDuration:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
