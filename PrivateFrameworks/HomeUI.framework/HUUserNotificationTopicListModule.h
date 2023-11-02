
@interface HUUserNotificationTopicListModule : HFItemModule {
    HFItem * _bridgesItem;
    HMHome * _home;
    HFItem * _networkRoutersListItem;
    HFUserNotificationServiceTopicItemProvider * _notificationTopicItemProvider;
    HFItem * _speakerSettingsItem;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, retain) HFItem *bridgesItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFItem *networkRoutersListItem;
@property (nonatomic, readonly) HFUserNotificationServiceTopicItemProvider *notificationTopicItemProvider;
@property (nonatomic, retain) HFItem *speakerSettingsItem;
@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;

+ (id)sectionID;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)bridgesItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)networkRoutersListItem;
- (id)notificationTopicItemProvider;
- (void)setBridgesItem:(id)arg1;
- (void)setNetworkRoutersListItem:(id)arg1;
- (void)setSpeakerSettingsItem:(id)arg1;
- (id)speakerSettingsItem;
- (id)staticItemProvider;
- (id)topicForItem:(id)arg1;

@end
