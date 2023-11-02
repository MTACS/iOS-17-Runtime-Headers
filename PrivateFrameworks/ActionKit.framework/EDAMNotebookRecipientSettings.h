
@interface EDAMNotebookRecipientSettings : FATObject {
    NSNumber * _inMyList;
    NSNumber * _reminderNotifyEmail;
    NSNumber * _reminderNotifyInApp;
    NSString * _stack;
}

@property (nonatomic, retain) NSNumber *inMyList;
@property (nonatomic, retain) NSNumber *reminderNotifyEmail;
@property (nonatomic, retain) NSNumber *reminderNotifyInApp;
@property (nonatomic, retain) NSString *stack;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)inMyList;
- (id)reminderNotifyEmail;
- (id)reminderNotifyInApp;
- (void)setInMyList:(id)arg1;
- (void)setReminderNotifyEmail:(id)arg1;
- (void)setReminderNotifyInApp:(id)arg1;
- (void)setStack:(id)arg1;
- (id)stack;

@end
