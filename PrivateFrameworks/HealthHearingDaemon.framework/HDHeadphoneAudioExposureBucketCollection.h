
@interface HDHeadphoneAudioExposureBucketCollection : NSObject {
    bool  _dirty;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _storage;
}

@property (getter=isDirty, nonatomic) bool dirty;

- (void).cxx_destruct;
- (id)_bucketsWithEarliestStartDate:(id)arg1 resetDoseToZero:(bool)arg2 error:(id*)arg3;
- (id)_lock_snapshotStatisticsForNowDate:(id)arg1 error:(id*)arg2;
- (id)_lock_updateWithSampleBatch:(id)arg1 error:(id*)arg2;
- (id)_updateWithSampleBatch:(id)arg1 needsRebuild:(bool*)arg2 error:(id*)arg3;
- (void)clear;
- (id)copyWithEarliestStartDate:(id)arg1 resetDoseToZero:(bool)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithBuckets:(id)arg1;
- (void)insertBuckets:(id)arg1;
- (bool)isDirty;
- (void)pruneWithNowDate:(id)arg1;
- (void)setDirty:(bool)arg1;
- (id)snapshotStatisticsForNowDate:(id)arg1 error:(id*)arg2;
- (id)unitTesting_snapshotBuckets;

@end
