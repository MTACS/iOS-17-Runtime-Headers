
@interface HUMediaAccessoryAudioSettingsItemManager : HFItemManager {
    HFItem * _audioSettingsItem;
    HFMediaSystemBuilder * _mediaSystemBuilder;
}

@property (nonatomic, readonly) HFItem *audioSettingsItem;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)audioSettingsItem;
- (id)initWithMediaSystemBuilder:(id)arg1 sourceItem:(id)arg2 delegate:(id)arg3;
- (id)mediaSystemBuilder;

@end
