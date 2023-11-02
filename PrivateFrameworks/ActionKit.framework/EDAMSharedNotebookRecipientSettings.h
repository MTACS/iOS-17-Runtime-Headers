
@interface EDAMSharedNotebookRecipientSettings : FATObject {
    NSNumber * _reminderNotifyEmail;
    NSNumber * _reminderNotifyInApp;
}

@property (nonatomic, retain) NSNumber *reminderNotifyEmail;
@property (nonatomic, retain) NSNumber *reminderNotifyInApp;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)reminderNotifyEmail;
- (id)reminderNotifyInApp;
- (void)setReminderNotifyEmail:(id)arg1;
- (void)setReminderNotifyInApp:(id)arg1;

@end
