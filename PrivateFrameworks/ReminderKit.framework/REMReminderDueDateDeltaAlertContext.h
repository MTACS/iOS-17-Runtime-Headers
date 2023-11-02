
@interface REMReminderDueDateDeltaAlertContext : NSObject {
    REMReminder * _reminder;
}

@property (nonatomic, readonly) NSArray *dueDateDeltaAlerts;
@property (nonatomic, readonly) REMDueDateDeltaAlert *fetchedCurrentDueDateDeltaAlert;
@property (nonatomic, retain) REMReminder *reminder;

- (void).cxx_destruct;
- (id)dueDateDeltaAlerts;
- (id)fetchedCurrentDueDateDeltaAlert;
- (id)initWithReminder:(id)arg1;
- (id)reminder;
- (void)setReminder:(id)arg1;

@end
