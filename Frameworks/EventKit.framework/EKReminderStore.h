
@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider> {
    NSMutableDictionary * _cachedConstraints;
    NSMutableDictionary * _deletedObjects;
    EKEventStore * _eventStore;
    NSArray * _lists;
    NSMutableDictionary * _movedRemindersIDMap;
    NSMutableSet * _newObjectsIDs;
    NSMutableSet * _objectIDsToCommit;
    NSMutableArray * _objectsToReset;
    NSObject<OS_dispatch_queue> * _queryQueue;
    NSObject<OS_dispatch_queue> * _queue;
    REMStore * _remStore;
    NSMutableArray * _remindersNeedingMove;
    NSArray * _sources;
    NSMutableDictionary * _updatedObjects;
    NSMutableDictionary * queryCompletionHandlers;
}

@property (readonly) NSArray *calendars;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REMStore *remStore;
@property (readonly) NSArray *sources;
@property (readonly) Class superclass;

+ (Class)frozenClassForReminderClass:(Class)arg1;
+ (bool)isNotFoundError:(id)arg1;
+ (id)log;
+ (id)uniqueIdentifierForREMObject:(id)arg1;

- (void).cxx_destruct;
- (id)_allLists;
- (void)_checkPredicate:(id)arg1;
- (bool)_commit:(id*)arg1 error:(id*)arg2;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)arg1;
- (void)_loadAccounts;
- (void)_loadAccountsIfNeeded;
- (void)_loadLists;
- (void)_loadListsIfNeeded;
- (id)_moveRemindersToNewLists:(id)arg1 error:(id*)arg2;
- (void)_reminderCopiedToNewList:(id)arg1;
- (id)backingCalendarWithIdentifier:(id)arg1;
- (id)backingReminderWithIdentifier:(id)arg1;
- (id)cachedConstraintsForSource:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (id)calendars;
- (bool)commit:(id*)arg1;
- (id /* block */)completionBlockForFetchRequestToken:(id)arg1 remove:(bool)arg2;
- (id)createNewReminder;
- (id)createNewReminderCalendar;
- (id)defaultCalendarForNewReminders;
- (id)eventStore;
- (id)existingUpdatedObject:(id)arg1;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)fillInPath:(id)arg1 usingParents:(id)arg2;
- (id)frozenAlarmForREMAlarms:(id)arg1;
- (id)frozenCalendarFromCalendar:(id)arg1 error:(id*)arg2;
- (id)frozenObjectForReminderObject:(id)arg1;
- (id)initWithEventStore:(id)arg1 token:(id)arg2;
- (bool)isSourceManaged:(id)arg1;
- (id)newFrozenObjectForReminderObject:(id)arg1 withChanges:(id)arg2;
- (id)predicateForCalendarStoreForRemindersInCalendars:(id)arg1;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (id)remStore;
- (id)reminderWithIdentifier:(id)arg1;
- (id)reminderWithUniqueId:(id)arg1;
- (void)remindersChanged;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1;
- (bool)removeCalendar:(id)arg1 error:(id*)arg2;
- (bool)removeReminder:(id)arg1 error:(id*)arg2;
- (void)reset;
- (id)resetBackingAlarmWithBackingAlarm:(id)arg1;
- (id)resetBackingLocationWithBackingLocation:(id)arg1;
- (bool)saveCalendar:(id)arg1 error:(id*)arg2;
- (bool)saveObject:(id)arg1 withFrozenObject:(id)arg2 error:(id*)arg3;
- (bool)saveReminder:(id)arg1 error:(id*)arg2;
- (id)sourceWithIdentifier:(id)arg1;
- (id)sources;

@end
