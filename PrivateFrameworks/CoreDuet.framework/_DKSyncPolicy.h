
@interface _DKSyncPolicy : NSObject {
    bool  _alwaysSyncUpAndDown;
    unsigned long long  _assetThresholdInBytes;
    unsigned long long  _firstSyncPeriodInDays;
    bool  _forceSync;
    unsigned long long  _maxSyncDownIntervalInDays;
    unsigned long long  _maxSyncsPerDay;
    unsigned long long  _minSyncIntervalInSeconds;
    unsigned long long  _minSyncsPerDay;
    unsigned long long  _numChangesTriggeringSync;
    unsigned long long  _policyDownloadIntervalInDays;
    bool  _pushTriggersSync;
    unsigned long long  _singleDeviceSyncIntervalInDays;
    NSArray * _streamNamesWithAdditionsTriggeringSync;
    NSArray * _streamNamesWithDeletionsTriggeringSync;
    bool  _syncDisabled;
    unsigned long long  _syncTimeoutInSeconds;
    unsigned long long  _triggeredSyncDelayInSeconds;
}

@property (nonatomic, readonly) bool alwaysSyncUpAndDown;
@property (nonatomic, readonly) unsigned long long assetThresholdInBytes;
@property (nonatomic, readonly) unsigned long long firstSyncPeriodInDays;
@property (nonatomic, readonly) bool forceSync;
@property (nonatomic, readonly) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic, readonly) unsigned long long maxSyncsPerDay;
@property (nonatomic, readonly) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic, readonly) unsigned long long minSyncsPerDay;
@property (nonatomic, readonly) unsigned long long numChangesTriggeringSync;
@property (nonatomic, readonly) bool pushTriggersSync;
@property (nonatomic, readonly) unsigned long long singleDeviceSyncIntervalInDays;
@property (nonatomic, readonly) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (nonatomic, readonly) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic, readonly) bool syncDisabled;
@property (nonatomic, readonly) unsigned long long syncTimeoutInSeconds;
@property (nonatomic, readonly) unsigned long long triggeredSyncDelayInSeconds;

+ (id)forceSyncPolicy;
+ (id)policy;

- (void).cxx_destruct;
- (bool)alwaysSyncUpAndDown;
- (unsigned long long)assetThresholdInBytes;
- (id)description;
- (unsigned long long)firstSyncPeriodInDays;
- (bool)forceSync;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(bool)arg1;
- (unsigned long long)maxSyncDownIntervalInDays;
- (unsigned long long)maxSyncsPerDay;
- (unsigned long long)minSyncIntervalInSeconds;
- (unsigned long long)minSyncsPerDay;
- (unsigned long long)numChangesTriggeringSync;
- (bool)pushTriggersSync;
- (id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(bool)arg3 isTriggeredSync:(bool)arg4;
- (unsigned long long)singleDeviceSyncIntervalInDays;
- (id)streamNamesWithAdditionsTriggeringSync;
- (id)streamNamesWithDeletionsTriggeringSync;
- (bool)syncDisabled;
- (unsigned long long)syncTimeoutInSeconds;
- (unsigned long long)triggeredSyncDelayInSeconds;

@end
