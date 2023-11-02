
@interface HMDWatchConnectivityLogEvent : HMMLogEvent {
    bool  _reportComplete;
    unsigned long long  _watchAddedNotificationCount;
    unsigned long long  _watchRemovedNotificationCount;
}

@property (getter=isReportComplete, nonatomic) bool reportComplete;
@property (nonatomic) unsigned long long watchAddedNotificationCount;
@property (nonatomic) unsigned long long watchRemovedNotificationCount;

- (id)init;
- (bool)isReportComplete;
- (void)setReportComplete:(bool)arg1;
- (void)setWatchAddedNotificationCount:(unsigned long long)arg1;
- (void)setWatchRemovedNotificationCount:(unsigned long long)arg1;
- (unsigned long long)watchAddedNotificationCount;
- (unsigned long long)watchRemovedNotificationCount;

@end
