
@interface NWStatsEntityMapCache : NSObject {
    unsigned int  _capacityLimit;
    double  _hitRetainTime;
    double  _missRetainTime;
    unsigned int  _pruneSize;
    NSMutableDictionary * _uuidMap;
}

@property unsigned int capacityLimit;
@property double hitRetainTime;
@property double missRetainTime;
@property unsigned int pruneSize;

- (void).cxx_destruct;
- (unsigned int)capacityLimit;
- (id)description;
- (id)entryForUUID:(id)arg1;
- (double)hitRetainTime;
- (id)init;
- (double)missRetainTime;
- (void)pruneCache;
- (unsigned int)pruneSize;
- (void)setCapacityLimit:(unsigned int)arg1;
- (void)setEntry:(id)arg1 forUUID:(id)arg2;
- (void)setHitRetainTime:(double)arg1;
- (void)setMissRetainTime:(double)arg1;
- (void)setPruneSize:(unsigned int)arg1;
- (id)stateDictionary;

@end
