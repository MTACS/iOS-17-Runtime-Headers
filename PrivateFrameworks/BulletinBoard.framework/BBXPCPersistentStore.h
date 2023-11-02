
@interface BBXPCPersistentStore : NSObject <BBPersistentStoreInterface> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection * _settingsPersistenceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_ensureSettingsPersistenceConnection;
- (void)_resetSettingsPersistenceConnection;
- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (long long)effectiveGlobalAnnounceSetting;
- (long long)effectiveGlobalContentPreviewsSetting;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (bool)hasSectionInfoLegacyFile;
- (id)init;
- (id)readClearedSections;
- (id)readSectionInfo;
- (id)readSectionInfoLegacy;
- (id)readSectionInfoWithVersionNumberForMigration;
- (id)readSectionOrder;
- (void)setGlobalAnnounceCarPlaySetting:(long long)arg1;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)arg1;
- (void)setGlobalAnnounceSetting:(long long)arg1;
- (void)setGlobalContentPreviewsSetting:(long long)arg1;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)arg1;
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryTimes:(id)arg1;
- (void)writeClearedSections:(id)arg1;
- (void)writeSectionInfo:(id)arg1;
- (void)writeSectionOrder:(id)arg1;

@end
