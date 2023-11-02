
@interface HDHeadphoneExposureStatisticsResult : NSObject {
    HDHeadphoneAudioExposureBucketCollection * _cache;
    bool  _eligbleForUserNotification;
    bool  _needsRebuildOnNextUnlock;
    NSNumber * _prunedCount;
}

@property (nonatomic, readonly) HDHeadphoneAudioExposureBucketCollection *cache;
@property (nonatomic, readonly) bool eligbleForUserNotification;
@property (nonatomic) bool needsRebuildOnNextUnlock;
@property (nonatomic, readonly) NSNumber *prunedCount;

+ (id)resultForAppendedSamplesDuringStartup;
+ (id)resultWithCache:(id)arg1 eligbleForUserNotification:(bool)arg2;
+ (id)resultWithCache:(id)arg1 prunedCount:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithCache:(id)arg1 eligbleForUserNotification:(bool)arg2 prunedCount:(id)arg3;
- (id)cache;
- (id)copyWithEligbleForUserNotificationOverride:(bool)arg1;
- (bool)eligbleForUserNotification;
- (bool)needsRebuildOnNextUnlock;
- (id)prunedCount;
- (void)setNeedsRebuildOnNextUnlock:(bool)arg1;

@end
