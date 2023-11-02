
@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache> {
    NSObject<OS_dispatch_queue> * _queue;
    CDRecentInfo * _recentPurgeableResults;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CDRecentInfo *recentPurgeableResults;

+ (id)fetchVolumeWithPath:(id)arg1;
+ (id)sharedPurgeableResultsCache;

- (void).cxx_destruct;
- (id)_recentPurgeableTotals:(int)arg1 validateResults:(bool)arg2;
- (void)absorbRecentInfo:(id)arg1;
- (id)bsdDiskForVolume:(id)arg1;
- (id)dictionaryByMerging:(id)arg1 with:(id)arg2;
- (bool)hasInvalids;
- (bool)hasSnapshotForVolume:(id)arg1;
- (id)initEmpty;
- (void)invalidateAllForgettingPushers:(bool)arg1;
- (bool)isEmpty;
- (bool)isInvalidForVolume:(id)arg1;
- (bool)isStale;
- (bool)isStaleForVolume:(id)arg1;
- (void)keepUpToDate:(id)arg1;
- (void)log;
- (id)queue;
- (id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2;
- (id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2 validateResults:(bool)arg3;
- (id)recentInfoForVolumes:(id)arg1 atUrgency:(int)arg2;
- (id)recentInfoForVolumes:(id)arg1 atUrgency:(int)arg2 validateResults:(bool)arg3 targetVolume:(id)arg4;
- (id)recentPurgeableResults;
- (id)recentPurgeableTotals:(int)arg1;
- (long long)recentStateForVolume:(id)arg1;
- (id)servicesForVolume:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecentPurgeableResults:(id)arg1;
- (id)thresholdsForVolume:(id)arg1;
- (void)updateRecentVolumeInfo:(id)arg1;

@end
