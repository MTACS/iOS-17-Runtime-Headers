
@interface HMDWatchConnectivityLogEventManager : HMFObject <HMFTimerDelegate> {
    bool  _hasCompleteReport;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _watchAddedNotificationCountForCurrentIncompleteReport;
    unsigned long long  _watchAddedNotificationCountForLastCompleteReport;
    HMFTimer * _watchConnectivityLogEventManagerTimer;
    unsigned long long  _watchRemovedNotificationCountForCurrentIncompleteReport;
    unsigned long long  _watchRemovedNotificationCountForLastCompleteReport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCompleteReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long watchAddedNotificationCountForCurrentIncompleteReport;
@property (nonatomic) unsigned long long watchAddedNotificationCountForLastCompleteReport;
@property (nonatomic, retain) HMFTimer *watchConnectivityLogEventManagerTimer;
@property (nonatomic) unsigned long long watchRemovedNotificationCountForCurrentIncompleteReport;
@property (nonatomic) unsigned long long watchRemovedNotificationCountForLastCompleteReport;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)completeCurrentReport;
- (struct HMDWatchConnectivityLogEventManagerSnapshot { bool x1; unsigned long long x2; unsigned long long x3; })currentWatchConnectivitySnapshot;
- (bool)hasCompleteReport;
- (void)incrementWatchAddedNotificationCount;
- (void)incrementWatchRemovedNotificationCount;
- (id)init;
- (void)setHasCompleteReport:(bool)arg1;
- (void)setWatchAddedNotificationCountForCurrentIncompleteReport:(unsigned long long)arg1;
- (void)setWatchAddedNotificationCountForLastCompleteReport:(unsigned long long)arg1;
- (void)setWatchConnectivityLogEventManagerTimer:(id)arg1;
- (void)setWatchRemovedNotificationCountForCurrentIncompleteReport:(unsigned long long)arg1;
- (void)setWatchRemovedNotificationCountForLastCompleteReport:(unsigned long long)arg1;
- (void)timerDidFire:(id)arg1;
- (unsigned long long)watchAddedNotificationCountForCurrentIncompleteReport;
- (unsigned long long)watchAddedNotificationCountForLastCompleteReport;
- (id)watchConnectivityLogEventManagerTimer;
- (unsigned long long)watchRemovedNotificationCountForCurrentIncompleteReport;
- (unsigned long long)watchRemovedNotificationCountForLastCompleteReport;

@end
