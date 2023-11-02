
@interface HDTinkerPrivacyAlertCoordinator : NSObject {
    NSDate * __unitTest_currentDate;
    NSDateComponents * __unitTest_scheduledBirthdayTransparencyAlertComponents;
    HDPrimaryProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDRestorableAlarm * _scheduler;
}

@property (nonatomic, copy) NSDate *_unitTest_currentDate;
@property (nonatomic, readonly) NSDateComponents *_unitTest_scheduledBirthdayTransparencyAlertComponents;

- (void).cxx_destruct;
- (void)_queue_clearDueEvents:(id)arg1;
- (id)_unitTest_currentDate;
- (bool)_unitTest_didReceiveDueEvents:(id)arg1;
- (bool)_unitTest_scheduleTransparencyAlertIfRequiredForBirthdate:(id)arg1 error:(id*)arg2;
- (id)_unitTest_scheduledBirthdayTransparencyAlertComponents;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (id)allScheduledDueDatesWithError:(id*)arg1;
- (id)allScheduledEventsWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)removeAllEventsWithError:(id*)arg1;
- (bool)scheduleEventIfRequiredForDateComponents:(id)arg1 eventIdentifier:(id)arg2 error:(id*)arg3;
- (void)set_unitTest_currentDate:(id)arg1;

@end
