
@interface AWDPowerBBCallMetricInfo : PBCodable <NSCopying> {
    unsigned int  _callDuration;
    struct { 
        unsigned int callDuration : 1; 
        unsigned int powerMicroWatt : 1; 
        unsigned int threshold : 1; 
    }  _has;
    unsigned int  _powerMicroWatt;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rxTxDurations;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sleepStateDurations;
    unsigned int  _threshold;
}

@property (nonatomic) unsigned int callDuration;
@property (nonatomic) bool hasCallDuration;
@property (nonatomic) bool hasPowerMicroWatt;
@property (nonatomic) bool hasThreshold;
@property (nonatomic) unsigned int powerMicroWatt;
@property (nonatomic, readonly) unsigned int*rxTxDurations;
@property (nonatomic, readonly) unsigned long long rxTxDurationsCount;
@property (nonatomic, readonly) unsigned int*sleepStateDurations;
@property (nonatomic, readonly) unsigned long long sleepStateDurationsCount;
@property (nonatomic) unsigned int threshold;

- (void)addRxTxDurations:(unsigned int)arg1;
- (void)addSleepStateDurations:(unsigned int)arg1;
- (unsigned int)callDuration;
- (void)clearRxTxDurations;
- (void)clearSleepStateDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallDuration;
- (bool)hasPowerMicroWatt;
- (bool)hasThreshold;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)powerMicroWatt;
- (bool)readFrom:(id)arg1;
- (unsigned int*)rxTxDurations;
- (unsigned int)rxTxDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rxTxDurationsCount;
- (void)setCallDuration:(unsigned int)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasPowerMicroWatt:(bool)arg1;
- (void)setHasThreshold:(bool)arg1;
- (void)setPowerMicroWatt:(unsigned int)arg1;
- (void)setRxTxDurations:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setSleepStateDurations:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setThreshold:(unsigned int)arg1;
- (unsigned int*)sleepStateDurations;
- (unsigned int)sleepStateDurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sleepStateDurationsCount;
- (unsigned int)threshold;
- (void)writeTo:(id)arg1;

@end