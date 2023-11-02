
@interface WLKBadgingUtilities : NSObject

+ (bool)addBadgeIdentifier:(id)arg1;
+ (id)badgeIdentifiers;
+ (void)clearSavedBadgeIdentifiers;
+ (id)currentBadgeNumber;
+ (bool)hasMigrated;
+ (bool)removeBadgeIdentifier:(id)arg1;
+ (id)sharedUtilities;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
