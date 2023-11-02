
@interface PKPassPreferencesManager : NSObject

+ (id)sharedInstance;

- (struct __CFString { }*)_cfPreferencesKeyForConstant:(id)arg1 passUniqueID:(id)arg2;
- (id)_decimalNumberForKey:(id)arg1 passUniqueID:(id)arg2;
- (double)_doubleForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_removeValueForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setDecimalNumber:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (void)_setDouble:(double)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (void)_setString:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (id)_stringForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_synchronize;
- (double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg1;
- (bool)hasDoneExpressUpgrade;
- (id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg1;
- (void)removeAllPreferences;
- (void)removeAllPreferencesForPassWithUniqueID:(id)arg1;
- (void)setHasDoneExpressUpgrade:(bool)arg1;

@end
