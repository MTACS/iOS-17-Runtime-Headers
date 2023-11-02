
@interface BYSetupStateManager : NSObject

+ (id)sharedManager;

- (id)buddyPrefsValueForKey:(id)arg1;
- (void)clearRestoreType;
- (bool)didRestoreFromBackup;
- (bool)didSetupUsingiTunes;
- (void)recordSetupUsingBuddy;
- (long long)restoreType;

@end
