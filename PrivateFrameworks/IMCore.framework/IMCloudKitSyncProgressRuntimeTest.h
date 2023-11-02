
@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest {
    unsigned long long  _maxProgressCount;
    unsigned long long  _progressCount;
    double  _progressRescheduleDelay;
}

@property unsigned long long maxProgressCount;
@property unsigned long long progressCount;
@property double progressRescheduleDelay;

- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (id)createSyncStatisticsForMockSyncState:(id)arg1;
- (unsigned long long)maxProgressCount;
- (unsigned long long)progressCount;
- (double)progressRescheduleDelay;
- (void)setMaxProgressCount:(unsigned long long)arg1;
- (void)setProgressCount:(unsigned long long)arg1;
- (void)setProgressRescheduleDelay:(double)arg1;
- (void)setUp;
- (void)startTest;

@end
