
@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate> {
    NSString * _assetType;
    unsigned long long  _attemptCount;
    NSString * _buildVersion;
    NSDate * _date;
    <DDSRemoteSyncStateDelegate> * _delegate;
    DDSBackgroundActivityScheduler * _scheduler;
    long long  _syncStatus;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DDSRemoteSyncStateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *metadataSyncStatePreferenceKey;
@property (readonly, copy) NSString *scheduleRetryIdentifier;
@property (readonly, copy) NSString *scheduleUpdateIdentifier;
@property (nonatomic, retain) DDSBackgroundActivityScheduler *scheduler;
@property (readonly) Class superclass;
@property (nonatomic) long long syncStatus;

+ (id)buildVersionString;
+ (double)timeIntervalUntilNextRegularUpdate;

- (void).cxx_destruct;
- (id)assetType;
- (unsigned long long)attemptCount;
- (void)beganUpdateCycle;
- (id)buildVersion;
- (void)completedUpdateCycleWithError:(id)arg1;
- (id)date;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 assetType:(id)arg2;
- (void)loadState;
- (void)loadStateAndScheduleUpdate;
- (id)metadataSyncStatePreferenceKey;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)arg1;
- (void)performScheduledActivityWithIdentifier:(id)arg1;
- (void)requestCompleteRefresh;
- (void)requestRetry;
- (void)requestUpdate;
- (void)resetState;
- (void)saveState;
- (void)scheduleRegularUpdate;
- (void)scheduleRetry;
- (id)scheduleRetryIdentifier;
- (id)scheduleUpdateIdentifier;
- (id)scheduler;
- (void)setAttemptCount:(unsigned long long)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSyncStatus:(long long)arg1;
- (bool)shouldInitiateRegularUpdateCycle;
- (bool)shouldRequestCompleteRefresh;
- (long long)syncStatus;
- (double)timeBetweenSyncs;

@end
