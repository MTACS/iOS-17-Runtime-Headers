
@interface AWDWiFiDPSBTSnapshot : PBCodable <NSCopying> {
    unsigned int  _duration;
    struct { 
        unsigned int ts : 1; 
        unsigned int duration : 1; 
        unsigned int use : 1; 
    }  _has;
    unsigned long long  _ts;
    unsigned int  _use;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTs;
@property (nonatomic) bool hasUse;
@property (nonatomic) unsigned long long ts;
@property (nonatomic) unsigned int use;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasTs;
- (bool)hasUse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTs:(bool)arg1;
- (void)setHasUse:(bool)arg1;
- (void)setTs:(unsigned long long)arg1;
- (void)setUse:(unsigned int)arg1;
- (unsigned long long)ts;
- (unsigned int)use;
- (void)writeTo:(id)arg1;

@end
