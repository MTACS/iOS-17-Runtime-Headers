
@interface CalMigratorProvider : NSObject

+ (id)reminderMigrator;
+ (id)reminderMigratorWithDefaultsProvider:(id)arg1;
+ (id)reminderMigratorWithReminderKitProvider:(id)arg1 defaultsProvider:(id)arg2;

@end
