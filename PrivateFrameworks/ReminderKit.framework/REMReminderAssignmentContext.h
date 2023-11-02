
@interface REMReminderAssignmentContext : NSObject {
    REMReminder * _reminder;
}

@property (nonatomic, readonly) NSSet *assignments;
@property (nonatomic, readonly) REMAssignment *currentAssignment;
@property (nonatomic) REMReminder *reminder;

- (void).cxx_destruct;
- (id)assignments;
- (id)currentAssignment;
- (id)initWithReminder:(id)arg1;
- (id)reminder;
- (void)setReminder:(id)arg1;

@end
