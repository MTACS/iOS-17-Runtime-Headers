
@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager * _ageGatingManager;
    HDRestorableAlarmScheduler * _alarmScheduler;
    HDAppSubscriptionManager * _appSubscriptionManager;
    HDAttachmentManager * _attachmentManager;
    HDAWDSubmissionManager * _awdSubmissionManager;
    HDCurrentActivitySummaryHelper * _currentActivitySummaryHelper;
    HDDataCollectionManager * _dataCollectionManager;
    HDDemoDataManager * _demoDataManager;
    HDFitnessMachineManager * _fitnessMachineManager;
    HDNanoSyncManager * _nanoSyncManager;
    HDNotificationManager * _notificationManager;
    HDNotificationSyncManager * _notificationSyncManager;
    HDPeriodicCountryMonitor * _periodicCountryMonitor;
    HDProtectedDataOperationScheduler * _protectedDataOperationScheduler;
    HDRapportMessenger * _rapportMessenger;
    HDServiceConnectionManager * _serviceConnectionManager;
    HDHealthServiceManager * _serviceManager;
    HDAssertionManager * _sessionAssertionManager;
    HDSummarySharingEntryIDSManager * _summarySharingEntryIDSManager;
    HDSummarySharingEntryManager * _summarySharingEntryManager;
    HDTinkerPrivacyAlertCoordinator * _tinkerPrivacyAlertCoordinator;
    HDWorkoutCondenser * _workoutCondenser;
    HDWorkoutManager * _workoutManager;
}

- (void).cxx_destruct;
- (id)_initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileIdentifier:(id)arg4;
- (id)_newAWDSubmissionManager;
- (id)_newNanoSyncManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)arg1;
- (id)_newRapportMessenger;
- (id)_newWorkoutManager;
- (id)activityCacheManager;
- (id)ageGatingManager;
- (id)alarmScheduler;
- (id)appSubscriptionManager;
- (id)attachmentManager;
- (id)awdSubmissionManager;
- (id)currentActivitySummaryHelper;
- (id)dataCollectionManager;
- (id)fitnessMachineManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3;
- (id)nanoSyncManager;
- (id)notificationManager;
- (id)notificationSyncManager;
- (id)periodicCountryMonitor;
- (id)protectedDataOperationScheduler;
- (id)rapportMessenger;
- (id)serviceConnectionManager;
- (id)serviceManager;
- (id)sessionAssertionManager;
- (id)sharingEntryManager;
- (id)summarySharingEntryIDSManager;
- (void)terminationCleanup;
- (id)tinkerPrivacyAlertCoordinator;
- (void)unitTest_setNanoSyncManager:(id)arg1;
- (void)unitTest_setServiceManager:(id)arg1;
- (id)workoutCondenser;
- (id)workoutManager;

@end
