
@interface HDMedicationNotificationSyncManager : NSObject <HDMedicationScheduleSynchronousObserver, HDNotificationSyncClientDelegate> {
    HDNotificationManager * _notificationManager;
    HDNotificationSyncClient * _notificationSyncClient;
    HDProfile * _profile;
    NSMutableDictionary * _scheduleDict;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _scheduleDictLock;
    HDSyncIdentityManager * _syncIdentityManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDNotificationManager *notificationManager;
@property (nonatomic, readonly) HDNotificationSyncClient *notificationSyncClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldSendHoldInstructionForNewDoseEvent:(id)arg1;
- (bool)_shouldSendHoldInstructionForOldScheduleItem:(id)arg1 compareWithNewScheduleItem:(id)arg2;
- (void)doseEventsAdded:(id)arg1;
- (id)init;
- (id)initWithProfileExtension:(id)arg1;
- (id)initWithProfileExtension:(id)arg1 notificationSyncClient:(id)arg2;
- (long long)isScheduleItemOnHold:(id)arg1 errorOut:(id*)arg2;
- (id)notificationManager;
- (id)notificationSyncClient;
- (void)notificationSyncClient:(id)arg1 didReceiveInstructionWithAction:(long long)arg2;
- (void)scheduleManager:(id)arg1 transaction:(id)arg2 didReschedule:(id)arg3;
- (void)scheduleManager:(id)arg1 transaction:(id)arg2 willReschedule:(id)arg3;

@end
