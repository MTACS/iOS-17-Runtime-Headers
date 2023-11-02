
@interface AWDWiFiLprxStats : PBCodable <NSCopying> {
    struct { 
        unsigned int phyActiveDuration : 1; 
        unsigned int phySearchDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int lprxEnterCnt : 1; 
        unsigned int lprxExitCnt : 1; 
        unsigned int phyActiveCount : 1; 
        unsigned int phySearchCount : 1; 
    }  _has;
    unsigned int  _lprxEnterCnt;
    unsigned int  _lprxExitCnt;
    unsigned int  _phyActiveCount;
    unsigned long long  _phyActiveDuration;
    unsigned int  _phySearchCount;
    unsigned long long  _phySearchDuration;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasLprxEnterCnt;
@property (nonatomic) bool hasLprxExitCnt;
@property (nonatomic) bool hasPhyActiveCount;
@property (nonatomic) bool hasPhyActiveDuration;
@property (nonatomic) bool hasPhySearchCount;
@property (nonatomic) bool hasPhySearchDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int lprxEnterCnt;
@property (nonatomic) unsigned int lprxExitCnt;
@property (nonatomic) unsigned int phyActiveCount;
@property (nonatomic) unsigned long long phyActiveDuration;
@property (nonatomic) unsigned int phySearchCount;
@property (nonatomic) unsigned long long phySearchDuration;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLprxEnterCnt;
- (bool)hasLprxExitCnt;
- (bool)hasPhyActiveCount;
- (bool)hasPhyActiveDuration;
- (bool)hasPhySearchCount;
- (bool)hasPhySearchDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lprxEnterCnt;
- (unsigned int)lprxExitCnt;
- (void)mergeFrom:(id)arg1;
- (unsigned int)phyActiveCount;
- (unsigned long long)phyActiveDuration;
- (unsigned int)phySearchCount;
- (unsigned long long)phySearchDuration;
- (bool)readFrom:(id)arg1;
- (void)setHasLprxEnterCnt:(bool)arg1;
- (void)setHasLprxExitCnt:(bool)arg1;
- (void)setHasPhyActiveCount:(bool)arg1;
- (void)setHasPhyActiveDuration:(bool)arg1;
- (void)setHasPhySearchCount:(bool)arg1;
- (void)setHasPhySearchDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLprxEnterCnt:(unsigned int)arg1;
- (void)setLprxExitCnt:(unsigned int)arg1;
- (void)setPhyActiveCount:(unsigned int)arg1;
- (void)setPhyActiveDuration:(unsigned long long)arg1;
- (void)setPhySearchCount:(unsigned int)arg1;
- (void)setPhySearchDuration:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
