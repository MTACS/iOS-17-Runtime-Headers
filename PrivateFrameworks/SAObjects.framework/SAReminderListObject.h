
@interface SAReminderListObject : SADomainObject

@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SAReminderRecurrence *recurrence;
@property (nonatomic, retain) SAReminderTrigger *reminderTrigger;
@property (nonatomic, copy) NSArray *reminders;
@property (nonatomic, copy) NSArray *remindersToCreate;
@property (nonatomic, copy) NSNumber *totalNumOfReminders;

+ (id)listObject;
+ (id)listObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)accountName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (id)recurrence;
- (id)reminderTrigger;
- (id)reminders;
- (id)remindersToCreate;
- (void)setAccountName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setReminderTrigger:(id)arg1;
- (void)setReminders:(id)arg1;
- (void)setRemindersToCreate:(id)arg1;
- (void)setTotalNumOfReminders:(id)arg1;
- (id)totalNumOfReminders;

@end
