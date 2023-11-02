
@interface HDHeadphoneExposureNotificationSyncManager : NSObject <HDNotificationSyncClientDelegate> {
    HDNotificationManager * _notificationManager;
    HDNotificationSyncClient * _notificationSyncClient;
    HKObserverSet * _observers;
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_computeFireDateFromResetDosageCategoryIdentifier:(id)arg1;
- (id)_extractLatestFireDateFromResetDosageEvents:(id)arg1;
- (id)_generateResetDosageCategoryIdentifierWithDate:(id)arg1;
- (void)_handleDismissNotification;
- (void)_handleResetDosageEventsWithIdentifiers:(id)arg1;
- (void)_notifyObserversResetDosageForFireDate:(id)arg1;
- (id)_resetDosageEventIdentifiersFromNotificationCategoryIdentifiers:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 notificationSyncClient:(id)arg2 notificationManager:(id)arg3;
- (void)notificationSyncClient:(id)arg1 didReceiveInstructionWithAction:(long long)arg2;
- (bool)notifyHAENotificationAddedWithSample:(id)arg1 error:(id*)arg2;
- (void)removeObserver:(id)arg1;

@end
