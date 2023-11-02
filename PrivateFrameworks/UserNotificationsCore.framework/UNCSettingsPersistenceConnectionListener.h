
@interface UNCSettingsPersistenceConnectionListener : NSObject <NSXPCListenerDelegate, UNCSettingsPersistenceServerInterface> {
    UNCBulletinDefaults * _bulletinDefaults;
    NSMutableArray * _connections;
    UNCEffectiveSettings * _effectiveSettingsProvider;
    NSXPCListener * _listener;
    UNCNotificationSettingsPersistentStore * _persistentSettingsStore;
    UNCSectionInfoStore * _sectionInfoStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)activeSectionIDsWithHandler:(id /* block */)arg1;
- (void)addActiveSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)allSectionIDsWithHandler:(id /* block */)arg1;
- (void)allSectionInfosByIDWithHandler:(id /* block */)arg1;
- (void)allSortedActiveSections:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)allSortedSectionInfos:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)clearedInfoForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)clearedSectionsByIDWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 universalSectionID:(id)arg2 feeds:(unsigned long long)arg3;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveGlobalAnnounceSettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveGlobalScheduledDeliverySettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithHandler:(id /* block */)arg1;
- (void)hasSectionInfoLegacyFileWithHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithPersistentStore:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pairedSyncDeviceCountWithHandler:(id /* block */)arg1;
- (void)readSavedClearedSectionsWithHandler:(id /* block */)arg1;
- (void)readSectionInfoLegacyFileWithHandler:(id /* block */)arg1;
- (void)readSectionInfoWithHandler:(id /* block */)arg1;
- (void)readSectionInfoWithVersionNumberForMigrationWithHandler:(id /* block */)arg1;
- (void)readSectionOrderWithHandler:(id /* block */)arg1;
- (void)removeSectionWithID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)sectionInfoForSectionID:(id)arg1 effective:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)sectionInfosForSectionIDs:(id)arg1 effective:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)sendPendingSyncedRemovals;
- (void)setAllSectionInfoByID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setClearedInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)setClearedSectionsByID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalAnnounceSetting:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)sortedSectionIDsWithHandler:(id /* block */)arg1;
- (void)writeClearedSections:(id)arg1;
- (void)writeSectionInfo:(id)arg1;
- (void)writeSectionOrder:(id)arg1;

@end
