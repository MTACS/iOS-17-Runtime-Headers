
@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface, BLTRemoteGlobalSettingsProvider> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection * _connectionQueue_bbServerConnection;
    NSXPCConnection * _connectionQueue_unServerConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long globalScheduledDeliverySetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)clientInterface;
+ (void)initialize;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)_ensureBBServerSettingsConnection;
- (id)_ensureSettingsPersistenceConnection;
- (void)_resetBBServerSettingsConnection;
- (void)_resetSettingsPersistenceConnection;
- (id)_settingsConnection;
- (id)activeSectionInfo;
- (id)allActiveSectionIDs;
- (id)allEffectiveSectionInfo;
- (id)allSectionIDs;
- (id)allSectionInfo;
- (void)dealloc;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (long long)effectiveGlobalAnnounceSetting;
- (long long)effectiveGlobalContentPreviewsSetting;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionIDs:(id)arg1;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalAnnounceSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalScheduledDeliverySettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)arg1;
- (void)getSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)refreshAnnounceSettings;
- (void)refreshGlobalSettings;
- (void)refreshSectionInfo;
- (id)sectionInfoForSectionID:(id)arg1;
- (id)sectionInfoForSectionIDs:(id)arg1;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)arg1;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)arg1;
- (void)setEffectiveGlobalAnnounceSetting:(long long)arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)arg1;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)arg1;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)arg1;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateSectionInfoForSectionID:(id)arg1 withHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (long long)globalScheduledDeliverySetting;

@end
