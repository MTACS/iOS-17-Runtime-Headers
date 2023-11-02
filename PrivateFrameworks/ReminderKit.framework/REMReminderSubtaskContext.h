
@interface REMReminderSubtaskContext : NSObject {
    REMReminder * _reminder;
}

@property (nonatomic, readonly) REMReminder *parentReminder;
@property (nonatomic, retain) REMReminder *reminder;

- (void).cxx_destruct;
- (id)fetchObjectIDsOfCompletedSubtasksWithError:(id*)arg1;
- (id)fetchObjectIDsOfUnsupportedSubtasksWithError:(id*)arg1;
- (id)fetchRemindersForMovingWithError:(id*)arg1;
- (id)fetchRemindersWithError:(id*)arg1;
- (long long)fetchSubtasksMasksWithError:(id*)arg1;
- (bool)hasSubtasksWithError:(id*)arg1;
- (id)initWithReminder:(id)arg1;
- (id)parentReminder;
- (id)reminder;
- (void)setReminder:(id)arg1;

@end
