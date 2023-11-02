
@interface REMReminderFlaggedContext : NSObject {
    REMReminder * _reminder;
}

@property (nonatomic, readonly) long long flagged;
@property (nonatomic, retain) REMReminder *reminder;

- (void).cxx_destruct;
- (long long)flagged;
- (id)initWithReminder:(id)arg1;
- (id)reminder;
- (void)setReminder:(id)arg1;

@end
