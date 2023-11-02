
@interface SGRemindersAdapter : NSObject <SGJournalRemindersObserver> {
    REMStore * _reminderStore;
    SGSqlEntityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SGSqlEntityStore *store;
@property (readonly) Class superclass;

+ (id)_remindersFoundInAppsListInREMStore:(id)arg1;
+ (id)constructNotesForReminder:(id)arg1;
+ (bool)reminderHasDuplicate:(id)arg1 usingStore:(id)arg2;
+ (id)reminderPredicateForReminder:(id)arg1;
+ (unsigned long long)remindersCreatedBetweenStartDate:(id)arg1 endDate:(id)arg2;

- (void).cxx_destruct;
- (bool)_deleteReminder:(id)arg1 usingReminderStore:(id)arg2;
- (id)_remRemindersAssociatedWithStorageReminder:(id)arg1 remStore:(id)arg2;
- (id)_remRemindersAssociatedWithTitle:(id)arg1 sourceUniqueIdentifier:(id)arg2 usingStore:(id)arg3;
- (bool)_saveReminder:(id)arg1 usingReminderStore:(id)arg2;
- (void)addReminder:(id)arg1;
- (void)confirmReminderFromOtherDevice:(id)arg1;
- (void)confirmReminderFromThisDevice:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1 andREMStore:(id)arg2;
- (void)orphanReminder:(id)arg1;
- (void)rejectReminder:(id)arg1;
- (void)rejectReminderFromOtherDevice:(id)arg1;
- (void)rejectReminderFromThisDevice:(id)arg1;
- (void)reminderAlarmTriggeredFromThisDevice:(id)arg1;
- (void)setStore:(id)arg1;
- (id)sourceUniqueIdentifierForStorageReminder:(id)arg1;
- (id)store;

@end
