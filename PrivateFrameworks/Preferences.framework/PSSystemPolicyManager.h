
@interface PSSystemPolicyManager : NSObject

+ (bool)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1;
+ (bool)_cellularDataSettingsNeededForBundleID:(id)arg1;
+ (id)_dataUsageWorkspaceInfo;
+ (bool)_defaultAppSettingsNeededForBundleID:(id)arg1;
+ (bool)_documentSettingsNeededForBundleID:(id)arg1;
+ (bool)_familyControlsSettingNeededForBundleID:(id)arg1;
+ (bool)_languageSettingNeededForBundleID:(id)arg1;
+ (bool)_liveActivitiesSettingsNeededForBundleID:(id)arg1;
+ (bool)_notificationSettingsNeededForBundleID:(id)arg1;
+ (bool)_pasteboardSettingsNeededForBundleID:(id)arg1;
+ (bool)_photosSettingsNeededForProxy:(id)arg1;
+ (void)_populateBBSectionIDs;
+ (bool)_privacySettingsNeededForProxy:(id)arg1;
+ (bool)_shouldIncludeProxy:(id)arg1;
+ (bool)_systemSettingsNeededForProxy:(id)arg1;
+ (bool)_tapToPaySettingsNeededForBundleID:(id)arg1;
+ (id)_thirdPartyApplicationProxies;
+ (id)_thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (bool)hasAnyAppClip;
+ (id)specifiersForThirdPartyApps:(id)arg1;
+ (id)thirdPartyApplicationForBundleID:(id)arg1;
+ (id)thirdPartyApplicationProxies;
+ (id)thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)thirdPartyApplications;
+ (id)thirdPartyApplicationsIncludingAppClips:(bool)arg1;

@end
