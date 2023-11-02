
@protocol SGJournalRemindersObserver <SGJournalBaseObserver>

@required

- (void)addReminder:(SGStorageReminder *)arg1;
- (void)confirmReminderFromOtherDevice:(SGStorageReminder *)arg1;
- (void)confirmReminderFromThisDevice:(SGStorageReminder *)arg1;
- (void)orphanReminder:(SGStorageReminder *)arg1;
- (void)rejectReminderFromOtherDevice:(SGStorageReminder *)arg1;
- (void)rejectReminderFromThisDevice:(SGStorageReminder *)arg1;
- (void)reminderAlarmTriggeredFromThisDevice:(SGStorageReminder *)arg1;

@end
