
@protocol BBPersistentStoreInterface <NSObject>

@required

- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (long long)effectiveGlobalAnnounceSetting;
- (long long)effectiveGlobalContentPreviewsSetting;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (NSArray *)effectiveGlobalScheduledDeliveryTimes;
- (bool)hasSectionInfoLegacyFile;
- (NSDictionary *)readClearedSections;
- (NSDictionary *)readSectionInfo;
- (NSDictionary *)readSectionInfoLegacy;
- (NSDictionary *)readSectionInfoWithVersionNumberForMigration;
- (NSDictionary *)readSectionOrder;
- (void)setGlobalAnnounceCarPlaySetting:(long long)arg1;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)arg1;
- (void)setGlobalAnnounceSetting:(long long)arg1;
- (void)setGlobalContentPreviewsSetting:(long long)arg1;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)arg1;
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryTimes:(NSArray *)arg1;
- (void)writeClearedSections:(NSDictionary *)arg1;
- (void)writeSectionInfo:(NSDictionary *)arg1;
- (void)writeSectionOrder:(NSDictionary *)arg1;

@end
