
@interface HDHeadphoneAudioExposureStatisticsCalculator : NSObject {
    HDHeadphoneDoseMetadataStore * _keyValueStore;
    HDHeadphoneAudioExposureBucketCollection * _memoryCache;
    bool  _needsRebuild;
    NSMutableArray * _pendingSamples;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _setup;
    id /* block */  _unitTesting_didUpdatePreviousSevenDayNotificationFireDate;
}

@property (nonatomic, readonly) bool needsRebuild;
@property (getter=isSetup, nonatomic, readonly) bool setup;
@property (nonatomic, copy) id /* block */ unitTesting_didUpdatePreviousSevenDayNotificationFireDate;

- (void).cxx_destruct;
- (id)_initWithProfile:(id)arg1 keyValueStore:(id)arg2 daemonDidBecomeReadyHandler:(id /* block */)arg3;
- (id)_loadBucketsFromProfile:(id)arg1 needsRebuild:(bool*)arg2 error:(id*)arg3;
- (id)_loadCacheWithError:(id*)arg1;
- (id)_rebuildWithAssertion:(id)arg1 allowInitialQueriesToFail:(bool)arg2 resetDoseToZero:(bool)arg3 error:(id*)arg4;
- (id)_rebuildWithAssertionFromHAENFireDateUpdate:(long long)arg1 assertion:(id)arg2 error:(id*)arg3;
- (void)_setNeedsRebuild:(bool)arg1;
- (id)_setupWithAssertion:(id)arg1 error:(id*)arg2;
- (id)_updateWithExposure:(id)arg1 replaying:(bool)arg2 assertion:(id)arg3 error:(id*)arg4;
- (id)_updateWithExposure:(id)arg1 replaying:(bool)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1 keyValueStore:(id)arg2;
- (bool)isSetup;
- (bool)needsRebuild;
- (id)pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
- (id)rebuildWithAssertion:(id)arg1 error:(id*)arg2;
- (void)setNeedsRebuild;
- (void)setUnitTesting_didUpdatePreviousSevenDayNotificationFireDate:(id /* block */)arg1;
- (void)unitTesting_clearNeedsRebuild;
- (id /* block */)unitTesting_didUpdatePreviousSevenDayNotificationFireDate;
- (id)unitTesting_pendingSamples;
- (id)unitTesting_snapshotBuckets;
- (id)updateWithExposure:(id)arg1 assertion:(id)arg2 error:(id*)arg3;
- (id)updateWithNotifications:(id)arg1 assertion:(id)arg2 error:(id*)arg3;
- (id)updateWithRemoteNotificationDismissalFireDate:(id)arg1 assertion:(id)arg2 error:(id*)arg3;

@end
