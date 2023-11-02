
@interface REMRemindersDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4;
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedReminderIDs:(id)arg5;
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedStringIdentifiers:(id)arg5 identifierSelector:(SEL)arg6;
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 showMarkedForDeleteObjects:(bool)arg5;

- (void).cxx_destruct;
- (id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchObjectIDsOfRemindersWithParentReminderID:(id)arg1 includeIncomplete:(bool)arg2 includeCompleted:(bool)arg3 isUnsupported:(bool)arg4 error:(id*)arg5;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchReminderWithObjectID:(id)arg1 fetchOptions:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersCountWithListID:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersCountWithParentReminderID:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersMatchingPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithListID:(id)arg1 includingSubtasks:(bool)arg2 error:(id*)arg3;
- (id)fetchRemindersWithObjectIDs:(id)arg1 fetchOptions:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithParentReminderID:(id)arg1 accountID:(id)arg2 includeUnsupported:(bool)arg3 error:(id*)arg4;
- (id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2;
- (long long)fetchSubtasksMasksWithParentReminderID:(id)arg1 error:(id*)arg2;
- (id)fetchSubtasksOfParentReminder:(id)arg1 includeUnsupported:(bool)arg2 error:(id*)arg3;
- (id)fetchSubtasksOfParentReminderChangeItem:(id)arg1 includeUnsupported:(bool)arg2 error:(id*)arg3;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
