
@interface UNSSettingsGateway : NSObject <BBObserverDelegate> {
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    BBSettingsGateway * _settingsGateway;
    BBObserver * _settingsObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addObserver:(id)arg1;
- (id)_queue_allEffectiveSectionInfos;
- (id)_queue_allSectionInfos;
- (id)_queue_effectiveSectionInfoForSectionID:(id)arg1;
- (id)_queue_effectiveSectionInfosForSectionIDs:(id)arg1;
- (void)_queue_getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)_queue_globalAnnounceCarPlaySetting;
- (long long)_queue_globalAnnounceHeadphonesSetting;
- (long long)_queue_globalAnnounceSetting;
- (long long)_queue_globalContentPreviewSetting;
- (long long)_queue_globalNotificationListDisplayStyleSetting;
- (long long)_queue_globalScheduledDeliverySetting;
- (long long)_queue_globalScheduledDeliveryShowNextSummarySetting;
- (id)_queue_globalScheduledDeliveryTimes;
- (void)_queue_removeObserver:(id)arg1;
- (id)_queue_sectionInfoForSectionID:(id)arg1;
- (id)_queue_sectionInfosForSectionIDs:(id)arg1;
- (void)_queue_setGlobalAnnounceCarPlaySetting:(long long)arg1;
- (void)_queue_setGlobalAnnounceHeadphonesSetting:(long long)arg1;
- (void)_queue_setGlobalAnnounceSetting:(long long)arg1;
- (void)_queue_setGlobalContentPreviewSetting:(long long)arg1;
- (void)_queue_setGlobalNotificationListDisplayStyleSetting:(long long)arg1;
- (void)_queue_setGlobalScheduledDeliverySetting:(long long)arg1;
- (void)_queue_setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)_queue_setGlobalScheduledDeliveryTimes:(id)arg1;
- (void)_queue_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)allEffectiveSectionInfo;
- (id)allSectionInfo;
- (void)dealloc;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionIDs:(id)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)globalAnnounceCarPlaySetting;
- (long long)globalAnnounceHeadphonesSetting;
- (long long)globalAnnounceSetting;
- (long long)globalContentPreviewSetting;
- (long long)globalNotificationListDisplayStyleSetting;
- (long long)globalScheduledDeliverySetting;
- (long long)globalScheduledDeliveryShowNextSummarySetting;
- (id)globalScheduledDeliveryTimes;
- (id)init;
- (void)observer:(id)arg1 updateGlobalSettings:(id)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)sectionInfoForSectionID:(id)arg1;
- (id)sectionInfoForSectionIDs:(id)arg1;
- (void)setGlobalAnnounceCarPlaySetting:(long long)arg1;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)arg1;
- (void)setGlobalAnnounceSetting:(long long)arg1;
- (void)setGlobalContentPreviewSetting:(long long)arg1;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)arg1;
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;
- (void)setGlobalScheduledDeliveryTimes:(id)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;

@end
