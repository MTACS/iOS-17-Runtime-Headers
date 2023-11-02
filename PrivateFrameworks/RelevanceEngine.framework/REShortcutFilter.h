
@interface REShortcutFilter : NSObject

+ (unsigned long long)filterVersion;

- (unsigned long long)_actionIdentifierForIntent:(id)arg1;
- (unsigned long long)_actionIdentifierForUserActivity:(id)arg1;
- (id)identifierForIntent:(id)arg1 bundleIdentifier:(id)arg2;
- (id)identifierForUserActivity:(id)arg1 bundleIdentifier:(id)arg2;
- (id)init;
- (id)intentByFilteringIntent:(id)arg1 withLevel:(unsigned long long)arg2;
- (id)userActivityByFilteringUserActivity:(id)arg1 withLevel:(unsigned long long)arg2;

@end
