
@interface CalEntitlementsVerifier : NSObject

+ (id)_currentProcessValueForEntitlement:(id)arg1 loadBlock:(id /* block */)arg2;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)arg1;
+ (id)currentProcessGetStringEntitlement:(id)arg1;
+ (bool)currentProcessHasAdoptedModernRequestAccessMethods;
+ (bool)currentProcessHasAllowSuggestionsEntitlement;
+ (bool)currentProcessHasBirthdayModificationEntitlement;
+ (bool)currentProcessHasBooleanEntitlement:(id)arg1;
+ (bool)currentProcessHasCalendarToolEntitlement;
+ (bool)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (bool)currentProcessHasSyncClientEntitlement;
+ (bool)currentProcessHasTestingEntitlement;
+ (bool)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (bool)currentProcessIsAutomator;
+ (bool)currentProcessIsCalendarDaemon;
+ (bool)currentProcessIsDataAccess;
+ (bool)currentProcessIsFirstPartyApp;
+ (bool)currentProcessIsFirstPartyCalendarApp;
+ (bool)currentProcessIsPreferences;

@end
