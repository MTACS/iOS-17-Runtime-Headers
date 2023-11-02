
@interface HDHealthAppProfileExtension : NSObject <HDHealthDaemonReadyObserver, HDNotificationSyncClientDelegate, HDProfileExtension, HDProfileReadyObserver, LSApplicationWorkspaceObserverProtocol> {
    HDHAHealthAppApplicationInstallationManager * _appInstallationManager;
    HDAnalyticsDailyEventManager * _dailyAnalyticsManager;
    HDHealthAppDataObserver * _dataObserver;
    HDHealthAppEmergencySOSManager * _emergencySOSManager;
    HDNotificationSyncClient * _healthAppNewDeviceNotificationSyncClient;
    HDNotificationSyncClient * _healthSharingNotificationSyncClient;
    HDHealthAppLabConceptObserver * _labConceptObserver;
    HDProfile * _profile;
    HDHealthAppSharingEntryObserver * _sharingEntryObserver;
    id /* block */  _unitTest_didProcessNotificationInstruction;
}

@property (nonatomic, retain) HDHAHealthAppApplicationInstallationManager *appInstallationManager;
@property (nonatomic, retain) HDAnalyticsDailyEventManager *dailyAnalyticsManager;
@property (nonatomic, retain) HDHealthAppDataObserver *dataObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDHealthAppEmergencySOSManager *emergencySOSManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDNotificationSyncClient *healthAppNewDeviceNotificationSyncClient;
@property (nonatomic, retain) HDNotificationSyncClient *healthSharingNotificationSyncClient;
@property (nonatomic, retain) HDHealthAppLabConceptObserver *labConceptObserver;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) HDHealthAppSharingEntryObserver *sharingEntryObserver;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_didProcessNotificationInstruction;

- (void).cxx_destruct;
- (void)_handleDismissInstruction;
- (void)_handleHoldInstruction;
- (void)_handleSendInstruction;
- (void)_healthAppWasUninstalled:(id)arg1;
- (id)appInstallationManager;
- (void)applicationsDidUninstall:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)dailyAnalyticsManager;
- (id)dataObserver;
- (void)dealloc;
- (id)emergencySOSManager;
- (id)healthAppNewDeviceNotificationSyncClient;
- (id)healthSharingNotificationSyncClient;
- (id)initWithProfile:(id)arg1;
- (id)labConceptObserver;
- (void)notificationSyncClient:(id)arg1 didReceiveInstructionWithAction:(long long)arg2;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setAppInstallationManager:(id)arg1;
- (void)setDailyAnalyticsManager:(id)arg1;
- (void)setDataObserver:(id)arg1;
- (void)setEmergencySOSManager:(id)arg1;
- (void)setHealthAppNewDeviceNotificationSyncClient:(id)arg1;
- (void)setHealthSharingNotificationSyncClient:(id)arg1;
- (void)setLabConceptObserver:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSharingEntryObserver:(id)arg1;
- (void)setUnitTest_didProcessNotificationInstruction:(id /* block */)arg1;
- (id)sharingEntryObserver;
- (id /* block */)unitTest_didProcessNotificationInstruction;

@end
