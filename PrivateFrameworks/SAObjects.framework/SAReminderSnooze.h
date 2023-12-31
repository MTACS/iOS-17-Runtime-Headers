
@interface SAReminderSnooze : SABaseClientBoundCommand

@property (nonatomic, retain) SAReminderDateTimeTriggerOffset *offset;
@property (nonatomic, copy) NSArray *reminderIdentifierList;

+ (id)snooze;
+ (id)snoozeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)offset;
- (id)reminderIdentifierList;
- (bool)requiresResponse;
- (void)setOffset:(id)arg1;
- (void)setReminderIdentifierList:(id)arg1;

@end
