
@interface SAAuthorization : NSObject

+ (id)SASyncedBundleId;
+ (void*)_copyPrefsValueForKey:(id)arg1;
+ (void)_setPrefsValue:(id)arg1 forKey:(id)arg2;
+ (bool)_synchronizePrefs;
+ (id)approvedAppExcludingBundleId:(id)arg1;
+ (id)approvedBundleId;
+ (bool)auditTokenAuthorizedForAnyEmergency:(struct { unsigned int x1[8]; })arg1;
+ (bool)auditTokenAuthorizedForCrashDetection:(struct { unsigned int x1[8]; })arg1;
+ (long long)authorizationStatusForCurrentConnection;
+ (long long)authorizationStatusWithTCCPreflightResult:(int)arg1;
+ (bool)connectionAuthorizedForAnyEmergency:(id)arg1;
+ (bool)connectionAuthorizedForCrashDetection:(id)arg1;
+ (bool)currentConnectionAuthorizedForAnyEmergency;
+ (bool)currentConnectionAuthorizedForCrashDetection;
+ (bool)isInFlight;
+ (bool)setAccess:(bool)arg1 forBundleId:(id)arg2;
+ (void)setThirdPartyBundleId:(id)arg1;
+ (void)showAuthorizationPrompt;
+ (bool)startAuthorizationForBundleURL:(id)arg1 preflightAuthorizationStatus:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
