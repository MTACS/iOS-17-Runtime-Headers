
@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler> {
    IMCloudKitHookTestSingleton * _cloudKitHooks;
    double  _defaultTestDuration;
    double  _previousInterval;
}

@property (nonatomic, retain) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly, copy) NSString *debugDescription;
@property double defaultTestDuration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (id)cloudKitHooks;
- (id)createSyncStatisticsForMockSyncState:(id)arg1;
- (double)defaultTestDuration;
- (void)sendSyncStateChangedEvent;
- (void)setCloudKitHooks:(id)arg1;
- (void)setDefaultTestDuration:(double)arg1;
- (void)setUp;
- (void)startTest;
- (void)tearDown;
- (void)updateMockSyncState;
- (void)willSendSyncState:(id)arg1 withSyncStatistics:(id)arg2;
- (void)willUpdateSyncState:(id)arg1;

@end
