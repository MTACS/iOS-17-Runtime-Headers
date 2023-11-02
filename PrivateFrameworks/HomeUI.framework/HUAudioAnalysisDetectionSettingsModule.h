
@interface HUAudioAnalysisDetectionSettingsModule : HFItemModule {
    HMAccessory * _accessory;
    HFItemProvider * _audioDetectionSettingsItemProvider;
    NSSet * _itemProviders;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HFItemProvider *audioDetectionSettingsItemProvider;

- (void).cxx_destruct;
- (id)accessory;
- (id)audioDetectionSettingsItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 accessory:(id)arg2;
- (id)itemProviders;

@end
