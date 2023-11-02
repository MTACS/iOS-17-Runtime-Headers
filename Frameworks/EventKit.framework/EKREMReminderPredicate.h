
@interface EKREMReminderPredicate : NSPredicate {
    NSSet * _calendarIdentifierSet;
    NSArray * _calendars;
    bool  noCalendarNoResult;
}

- (void).cxx_destruct;
- (bool)evaluateWithObject:(id)arg1;
- (id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id*)arg3;
- (id)initForCalendarStoreWithCalendars:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)predicateFormat;
- (id)remListIDsWithAllLists:(id)arg1;

@end
