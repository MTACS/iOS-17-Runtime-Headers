
@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {
    bool  _completed;
    NSDate * _end;
    NSDate * _start;
}

- (void).cxx_destruct;
- (bool)evaluateWithObject:(id)arg1;
- (id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id*)arg3;
- (id)initForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)initForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;

@end
