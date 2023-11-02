
@interface VCSleepDonationAction : VCSleepAction

+ (id)identifierForShortcut:(id)arg1;
+ (id)sleepActionsDictionaryForShortcuts:(id)arg1;
+ (id)sleepActionsDictionaryForShortcutsByApp:(id)arg1;
+ (id)sleepActionsForShortcuts:(id)arg1 bundleIdentifier:(id)arg2;

- (id)initWithShortcut:(id)arg1;
- (id)initWithShortcut:(id)arg1 bundleIdentifier:(id)arg2;

@end
