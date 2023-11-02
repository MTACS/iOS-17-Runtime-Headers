
@interface AWDWiFiMetric11axStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    AWDHEStats * _hestats;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasHestats;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDHEStats *hestats;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHestats;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hestats;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHestats:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
