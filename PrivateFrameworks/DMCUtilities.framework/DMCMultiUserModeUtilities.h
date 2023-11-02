
@interface DMCMultiUserModeUtilities : NSObject

+ (id)_configureQuotaSizeForSharedDeviceImmediately:(id)arg1;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)arg1;
+ (unsigned long long)_getDiskSize;
+ (unsigned long long)_previousQuotaSize;
+ (bool)_updateMultiUserConfigurationFileAtPath:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (bool)_updateMultiUserDeviceConfigurationFileWithKey:(id)arg1 value:(id)arg2;
+ (bool)_updateMultiUserUserConfigurationFileWithKey:(id)arg1 value:(id)arg2;
+ (bool)awaitUserConfigurationEnabled;
+ (bool)configureAwaitUserConfiguration:(id)arg1;
+ (bool)configureMAIDDefaultDomains:(id)arg1;
+ (bool)configureOnlineAuthenticationGracePeriod:(id)arg1;
+ (id)configureQuotaSizeForSharedDevice:(id)arg1 preferenceDomain:(struct __CFString { }*)arg2;
+ (id)configureResidentUsersNumberForSharedDevice:(id)arg1 preferenceDomain:(struct __CFString { }*)arg2;
+ (bool)configureShouldSkipLanguageAndLocaleSetupForNewUsers:(bool)arg1;
+ (bool)configureTemporarySessionOnly:(bool)arg1 useDynamicQuotaSize:(bool)arg2 restoreQuotaSizeWhenDisabled:(bool)arg3 preferenceDomain:(struct __CFString { }*)arg4;
+ (bool)configureTemporarySessionTimeout:(double)arg1;
+ (id)configureToSharedDeviceWithPreferenceDomain:(struct __CFString { }*)arg1;
+ (bool)configureUserSessionTimeout:(double)arg1;
+ (bool)deviceHasMultipleUsers;
+ (unsigned long long)getDiskAvailableSize;
+ (bool)inSharediPadUserSession;
+ (bool)isCurrentUserConfigured;
+ (bool)isEphemeralMultiUser;
+ (bool)isFirstSetupBuddyDone;
+ (bool)isPrimaryUserSession;
+ (bool)isSharediPad;
+ (id)managedAppleIDDefaultDomains;
+ (bool)markCurrentUserAsConfigured;
+ (id)onlineAuthenticationGracePeriod;
+ (bool)shouldSkipLanguageAndLocaleSetupForNewUsers;
+ (bool)temporarySessionOnly;
+ (double)temporarySessionTimeout;
+ (bool)useDynamicQuotaSize;
+ (double)userSessionTimeout;

@end
