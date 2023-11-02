
@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess> {
    WBSStartPageSectionManager * _lazyStartPageSectionsManager;
}

@property (nonatomic, readonly) bool backgroundImageAppearanceIsLight;
@property (nonatomic, readonly) bool backgroundImageExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *syncSettingsUpDictionary;

- (void).cxx_destruct;
- (id)_deviceClass;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)arg1;
- (bool)_isKnownPerSiteSetting:(id)arg1;
- (bool)_isShowBackgroundImageEnabled;
- (id)_perSitePreferencesStore;
- (long long)_settingForValue:(id)arg1;
- (id)_startPageSectionOrder;
- (void)_updatePerSiteSettingsWithRecord:(id)arg1;
- (void)_updatePerSiteSettingsWithRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateStartPageBackgroundImageWithRecord:(id)arg1;
- (void)_updateStartPageSectionOrder:(id)arg1;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)arg1 record:(id)arg2;
- (bool)backgroundImageAppearanceIsLight;
- (bool)backgroundImageExists;
- (void)deleteBackgroundImageDirectory;
- (void)didDeleteRemoteRecordWithID:(id)arg1;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)arg1;
- (id)startPageSectionsManager;
- (bool)syncEnabled;
- (id)syncSettingsUpDictionary;

@end
