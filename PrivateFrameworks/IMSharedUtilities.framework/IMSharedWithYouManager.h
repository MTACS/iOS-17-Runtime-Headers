
@interface IMSharedWithYouManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSNumber * _cachedSharedWithYouEnabledValue;
    NSSet * _enabledBundleIDs;
    int  _settingHasChangedNotificationToken;
    NSMutableDictionary * _swyPinsPerBundleID;
}

@property (nonatomic, readonly) LSApplicationWorkspace *_applicationWorkspace;
@property (nonatomic, copy) NSNumber *cachedSharedWithYouEnabledValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *enabledBundleIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic) int settingHasChangedNotificationToken;
@property (nonatomic, readonly, copy) NSArray *sharedWithYouApplicationBundleIDs;
@property (getter=isSharedWithYouEnabled, nonatomic) bool sharedWithYouEnabled;
@property (nonatomic, readonly) bool sharedWithYouKeyExists;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *swyPinsPerBundleID;

+ (id)_hiddenBundleIDs;
+ (bool)_isBundleIDAllowed:(id)arg1;
+ (id)appBundleIDsFromDefaults;
+ (id)collaborationAppBundleIDs;
+ (id)onboardingAppBundleIDs;
+ (id)sharedManager;
+ (id)tvAppBundleID;
+ (id)wolfHiddenSWYUIBundleIDs;

- (void).cxx_destruct;
- (id)_applicationWorkspace;
- (id)_installedLSAppRecordFromBundleIDs:(id)arg1;
- (id)_supportedDataDetectedURLSchemes;
- (void)appNameAndBundleIDFoURL:(id)arg1 outAppName:(id*)arg2 outBundleID:(id*)arg3;
- (id)appNameFromSharingURL:(id)arg1;
- (id)appStoreIDFromSharingURL:(id)arg1;
- (id)appStoreURLFromSharingURL:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)cachedSharedWithYouEnabledValue;
- (void)dealloc;
- (void)decrementPinCountForBundleID:(id)arg1;
- (id)defaultAppBundleIDs;
- (bool)defaultCollaborationAppsEnabled;
- (void)deleteSharedWithYouPreferences;
- (id)enabledApps;
- (id)enabledBundleIDs;
- (long long)getPinCountForBundleID:(id)arg1;
- (void)incrementPinCountForBundleID:(id)arg1;
- (id)init;
- (bool)isDataDetectedLinkAllowedForSWY:(id)arg1;
- (bool)isSharedWithYouEnabled;
- (bool)isSharedWithYouEnabledForApplicationWithBundleID:(id)arg1;
- (id)lsAppRecordForAppStoreShareURL:(id)arg1;
- (id)lsAppRecordForShareBearURL:(id)arg1;
- (id)lsAppRecordForURL:(id)arg1;
- (id)lsAppRecordForURL:(id)arg1 checkInstalledAppsOnly:(bool)arg2;
- (void)setCachedSharedWithYouEnabledValue:(id)arg1;
- (void)setEnabledBundleIDs:(id)arg1;
- (void)setSettingHasChangedNotificationToken:(int)arg1;
- (void)setSharedWithYouEnabled:(bool)arg1;
- (void)setSharedWithYouEnabled:(bool)arg1 forApplicationWithBundleID:(id)arg2;
- (void)setSharedWithYouEnabledForAllApplicationsIndividually:(bool)arg1;
- (void)setSwyPinsPerBundleID:(id)arg1;
- (int)settingHasChangedNotificationToken;
- (id)sharedWithYouApplicationBundleIDs;
- (id)sharedWithYouApps;
- (bool)sharedWithYouKeyExists;
- (bool)showPinningStatusTextForBundleID:(id)arg1;
- (id)swyPinsPerBundleID;
- (id)swyPublicEntitlementAppBundleIDs;
- (void)updateEnabledApps;
- (id)urlMinusFragment:(id)arg1 onlyCKURL:(bool)arg2;

@end
