
@interface MFPreferencesURL : NSObject

+ (id)_accountInfoSettingsURLForAccount:(id)arg1 preferenceURLType:(long long)arg2;
+ (id)_pathComponentsForAccount:(id)arg1 preferenceURLType:(long long)arg2;
+ (id)_urlForRoot:(id)arg1 pathComponents:(id)arg2;
+ (id)accountInfoURLForAccount:(id)arg1;
+ (id)accountURLForAccount:(id)arg1;
+ (id)addAccountURL;
+ (id)advancedAccountInfoURLForAccount:(id)arg1;
+ (id)blockedSenderURL;
+ (id)hideMyEmailURL;
+ (id)storageManagementURL;
+ (id)vipSenderListURL;

@end
