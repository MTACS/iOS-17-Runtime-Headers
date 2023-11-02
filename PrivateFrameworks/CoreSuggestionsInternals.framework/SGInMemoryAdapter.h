
@interface SGInMemoryAdapter : NSObject <SGJournalCalendarObserver, SGJournalContactsObserver, SGJournalRemindersObserver> {
    NSMutableDictionary * _contacts;
    NSMutableArray * _events;
    NSMutableArray * _reminders;
}

@property (nonatomic, readonly) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *reminders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addReminder:(id)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(id)arg1;
- (void)cancelEvents:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmEventFromOtherDevice:(id)arg1;
- (void)confirmEventFromThisDevice:(id)arg1;
- (void)confirmOrRejectContact:(id)arg1;
- (void)confirmReminderFromOtherDevice:(id)arg1;
- (void)confirmReminderFromThisDevice:(id)arg1;
- (id)contacts;
- (id)events;
- (id)init;
- (void)orphanEvent:(id)arg1;
- (void)orphanReminder:(id)arg1;
- (void)overwriteEvent:(id)arg1;
- (void)rejectContact:(id)arg1;
- (void)rejectEventFromOtherDevice:(id)arg1;
- (void)rejectEventFromThisDevice:(id)arg1;
- (void)rejectReminderFromOtherDevice:(id)arg1;
- (void)rejectReminderFromThisDevice:(id)arg1;
- (void)reminderAlarmTriggeredFromThisDevice:(id)arg1;
- (id)reminders;
- (void)removeAllStoredPseudoContacts;

@end
