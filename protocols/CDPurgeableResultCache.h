
@protocol CDPurgeableResultCache

@required

- (NSMutableDictionary *)dictionaryByMerging:(NSMutableDictionary *)arg1 with:(NSDictionary *)arg2;
- (bool)hasInvalids;
- (void)invalidateAllForgettingPushers:(bool)arg1;
- (bool)isEmpty;
- (bool)isStale;
- (NSDictionary *)recentInfoForVolume:(CacheDeleteVolume *)arg1 atUrgency:(int)arg2;
- (NSDictionary *)recentInfoForVolume:(CacheDeleteVolume *)arg1 atUrgency:(int)arg2 validateResults:(bool)arg3;
- (NSDictionary *)recentInfoForVolumes:(NSArray *)arg1 atUrgency:(int)arg2 validateResults:(bool)arg3 targetVolume:(NSString *)arg4;
- (NSDictionary *)recentPurgeableTotals:(int)arg1;
- (long long)recentStateForVolume:(CacheDeleteVolume *)arg1;

@end
