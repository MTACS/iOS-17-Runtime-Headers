
@interface SGJournal : NSObject {
    NSMutableArray * _calendarObservers;
    NSMutableArray * _contactsObservers;
    bool  _observersFrozen;
    NSMutableArray * _queuedOperations;
    NSMutableArray * _remindersObservers;
}

- (void).cxx_destruct;
- (void)_callCalendarObservers:(id)arg1 contactsObservers:(id)arg2 remindersObservers:(id)arg3 withEntry:(id)arg4;
- (unsigned long long)_eventBatchOperationSupportedForEntries:(id)arg1;
- (void)addCalendarObserver:(id)arg1;
- (void)addContactsObserver:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)addRemindersObserver:(id)arg1;
- (void)freezeObservers;
- (bool)hasObserver:(id)arg1;
- (id)init;
- (void)thawObserversForTesting;

@end
