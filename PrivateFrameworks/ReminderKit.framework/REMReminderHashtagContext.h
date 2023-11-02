
@interface REMReminderHashtagContext : NSObject {
    REMReminder * _reminder;
}

@property (nonatomic, readonly) NSSet *hashtags;
@property (nonatomic) REMReminder *reminder;

- (void).cxx_destruct;
- (id)hashtags;
- (id)initWithReminder:(id)arg1;
- (id)reminder;
- (void)setReminder:(id)arg1;

@end
