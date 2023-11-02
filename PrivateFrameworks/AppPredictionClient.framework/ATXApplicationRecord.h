
@interface ATXApplicationRecord : NSObject

+ (id)appInfoForBundle:(id)arg1;
+ (id)bundleIdForAdamIdIfInstalled:(unsigned long long)arg1;
+ (id)companionBundleIdForBundleId:(id)arg1;
+ (id)genreForBundle:(id)arg1;
+ (unsigned long long)genreIdForBundle:(id)arg1;
+ (void)getDeviceManagementPolicyForBundle:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)isAppClipForBundleId:(id)arg1;
+ (bool)isAppClipGivenAppRecord:(id)arg1;
+ (bool)isAppClipWebClipBundleId:(id)arg1;
+ (bool)isArcadeAppForBundle:(id)arg1;
+ (bool)isBackgroundAudioSupportedForBundle:(id)arg1;
+ (bool)isBetaAppForBundle:(id)arg1;
+ (bool)isDeviceManagementPolicyOkForBundleId:(id)arg1;
+ (bool)isEnterpriseAppForBundle:(id)arg1;
+ (bool)isHiddenFromSpringBoardWithBundleId:(id)arg1;
+ (bool)isInstalledAndNotRestrictedForBundle:(id)arg1;
+ (bool)isInstalledForBundle:(id)arg1;
+ (bool)isInstalledOrIsPlaceholderForBundle:(id)arg1;
+ (bool)isInstallingForBundle:(id)arg1;
+ (bool)isInternalAppForBundleId:(id)arg1;
+ (bool)isInternalOrSystemAppForBundleId:(id)arg1;
+ (bool)isLaunchProhibitedForBundle:(id)arg1;
+ (bool)isOffloadedForBundle:(id)arg1;
+ (bool)isRestoreInstallTypeForBundle:(id)arg1;
+ (bool)isSwiftPlaygroundsBundle:(id)arg1;
+ (bool)isSystemAppForBundleId:(id)arg1;
+ (bool)isUPPValidatedForBundle:(id)arg1;
+ (bool)isWebClipInstalledWithBundleId:(id)arg1;
+ (id)localizedNameForBundle:(id)arg1;
+ (id)localizedShortnameForBundle:(id)arg1;
+ (id)parentAppBundleIdForClipBundleID:(id)arg1;
+ (id)recordForAdamId:(unsigned long long)arg1;
+ (id)recordForBundleId:(id)arg1;
+ (id)registrationDateForBundle:(id)arg1;
+ (id)schemaWithoutFallbackForBundle:(id)arg1;

@end
