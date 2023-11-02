
@interface HDMedicationNotificationManager : NSObject {
    HKCalendarCache * _calendarCache;
    NSDate * _dateAnchor;
    HDRestorableAlarm * _expirationAlarm;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDRestorableAlarm * _restorableAlarm;
    HDRestorableAlarm * _unitTesting_expirationAlarm;
    NSObject<OS_dispatch_queue> * _unitTesting_expirationAlarmQueue;
    HDRestorableAlarm * _unitTesting_restorableAlarm;
    NSObject<OS_dispatch_queue> * _unitTesting_restorableAlarmQueue;
}

@property (nonatomic, readonly) bool areDoseRemindersEnabled;
@property (nonatomic, retain) HDRestorableAlarm *unitTesting_expirationAlarm;
@property (nonatomic) NSObject<OS_dispatch_queue> *unitTesting_expirationAlarmQueue;
@property (nonatomic, retain) HDRestorableAlarm *unitTesting_restorableAlarm;
@property (nonatomic) NSObject<OS_dispatch_queue> *unitTesting_restorableAlarmQueue;

- (void).cxx_destruct;
- (void)_addNotificationObserver:(id)arg1;
- (id)_notInteractedDoseEventsForScheduleItems:(id)arg1 transaction:(id)arg2;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (bool)_rescheduleMedicationsFromDate:(id)arg1 error:(id*)arg2;
- (bool)_scheduleMedicationsFromDate:(id)arg1 clearNotSentItems:(bool)arg2 error:(id*)arg3;
- (id)_upcomingOrphanedFollowUpEventsAtDate:(id)arg1 withError:(id*)arg2;
- (bool)areDoseRemindersEnabled;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)pruneAllScheduleItemsBeforeDate:(id)arg1 createDoseEvents:(bool)arg2 error:(id*)arg3;
- (bool)rescheduleMedicationsWithError:(id*)arg1;
- (void)setUnitTesting_expirationAlarm:(id)arg1;
- (void)setUnitTesting_expirationAlarmQueue:(id)arg1;
- (void)setUnitTesting_restorableAlarm:(id)arg1;
- (void)setUnitTesting_restorableAlarmQueue:(id)arg1;
- (id)unitTesting_activeSchedulesFromDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)unitTesting_expirationAlarm;
- (id)unitTesting_expirationAlarmQueue;
- (id)unitTesting_restorableAlarm;
- (id)unitTesting_restorableAlarmQueue;

@end
