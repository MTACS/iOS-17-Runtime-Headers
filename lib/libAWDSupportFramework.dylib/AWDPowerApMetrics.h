
@interface AWDPowerApMetrics : PBCodable <NSCopying> {
    unsigned int  _apAwakeDuration;
    unsigned int  _cpuPowerMicroWatt;
    unsigned int  _dramPowerMicroWatt;
    unsigned int  _gpuPowerMicroWatt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int apAwakeDuration : 1; 
        unsigned int cpuPowerMicroWatt : 1; 
        unsigned int dramPowerMicroWatt : 1; 
        unsigned int gpuPowerMicroWatt : 1; 
        unsigned int socPowerMicroWatt : 1; 
    }  _has;
    unsigned int  _socPowerMicroWatt;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int apAwakeDuration;
@property (nonatomic) unsigned int cpuPowerMicroWatt;
@property (nonatomic) unsigned int dramPowerMicroWatt;
@property (nonatomic) unsigned int gpuPowerMicroWatt;
@property (nonatomic) bool hasApAwakeDuration;
@property (nonatomic) bool hasCpuPowerMicroWatt;
@property (nonatomic) bool hasDramPowerMicroWatt;
@property (nonatomic) bool hasGpuPowerMicroWatt;
@property (nonatomic) bool hasSocPowerMicroWatt;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int socPowerMicroWatt;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)apAwakeDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cpuPowerMicroWatt;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dramPowerMicroWatt;
- (unsigned int)gpuPowerMicroWatt;
- (bool)hasApAwakeDuration;
- (bool)hasCpuPowerMicroWatt;
- (bool)hasDramPowerMicroWatt;
- (bool)hasGpuPowerMicroWatt;
- (bool)hasSocPowerMicroWatt;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApAwakeDuration:(unsigned int)arg1;
- (void)setCpuPowerMicroWatt:(unsigned int)arg1;
- (void)setDramPowerMicroWatt:(unsigned int)arg1;
- (void)setGpuPowerMicroWatt:(unsigned int)arg1;
- (void)setHasApAwakeDuration:(bool)arg1;
- (void)setHasCpuPowerMicroWatt:(bool)arg1;
- (void)setHasDramPowerMicroWatt:(bool)arg1;
- (void)setHasGpuPowerMicroWatt:(bool)arg1;
- (void)setHasSocPowerMicroWatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSocPowerMicroWatt:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)socPowerMicroWatt;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
