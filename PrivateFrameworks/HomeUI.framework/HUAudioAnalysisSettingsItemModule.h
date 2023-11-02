
@interface HUAudioAnalysisSettingsItemModule : HFItemModule <HFMediaAccessoryCommonSettingsDelegate> {
    HFAccessoryItemProvider * _accessoryItemProvider;
    HFItemProvider * _audioAnalysisDeviceItemProvider;
    HMHome * _home;
    HFMediaAccessoryItemProvider * _mediaAccessoryItemProvider;
    HFItemProvider * _soundsItemProvider;
}

@property (nonatomic, retain) HFAccessoryItemProvider *accessoryItemProvider;
@property (nonatomic, retain) HFItemProvider *audioAnalysisDeviceItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider;
@property (nonatomic, retain) HFItemProvider *soundsItemProvider;
@property (readonly) Class superclass;

+ (id /* block */)_audioAnalysisDeviceItemComparator;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)accessoryItemProvider;
- (id)audioAnalysisDeviceItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)enableAudioAnalysisSetting:(bool)arg1 forItem:(id)arg2;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (id)mediaAccessoryItemProvider;
- (void)mediaProfileContainer:(id)arg1 didUpdateSettingKeypath:(id)arg2 value:(id)arg3;
- (void)setAccessoryItemProvider:(id)arg1;
- (void)setAudioAnalysisDeviceItemProvider:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMediaAccessoryItemProvider:(id)arg1;
- (void)setSoundsItemProvider:(id)arg1;
- (id)soundsItemProvider;
- (id)updateAudioAnalysisDetectionSettings:(bool)arg1 forItem:(id)arg2;

@end
