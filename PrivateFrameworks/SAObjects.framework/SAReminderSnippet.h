
@interface SAReminderSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *reminderLists;
@property (nonatomic, copy) NSArray *reminders;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reminderLists;
- (id)reminders;
- (void)setReminderLists:(id)arg1;
- (void)setReminders:(id)arg1;

@end
