
@interface HUCameraRecordingOptionsModule : HFItemModule <HUCameraSettingsModule> {
    NSSet * _cameraProfiles;
    HUCameraCloudStorageSettingsModule * _cloudStorageModule;
    NSSet * _itemProviders;
    HUCameraRecordAudioSettingsItem * _recordAudioItem;
    HFStaticItemProvider * _recordAudioItemProvider;
    HUCameraSmartDetectionSettingsModule * _smartDetectionModule;
}

@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) HUCameraCloudStorageSettingsModule *cloudStorageModule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *itemProviders;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) HUCameraRecordAudioSettingsItem *recordAudioItem;
@property (nonatomic, retain) HFStaticItemProvider *recordAudioItemProvider;
@property (nonatomic, readonly) HUCameraSmartDetectionSettingsModule *smartDetectionModule;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraProfiles;
- (id)cloudStorageModule;
- (id)didSelectItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2;
- (bool)isItemHeader:(id)arg1;
- (id)itemProviders;
- (id)recordAudioItem;
- (id)recordAudioItemProvider;
- (void)setItemProviders:(id)arg1;
- (void)setRecordAudioItem:(id)arg1;
- (void)setRecordAudioItemProvider:(id)arg1;
- (id)smartDetectionModule;
- (void)updateRecordAudioValue:(bool)arg1;

@end
