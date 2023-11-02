
@interface HUCameraCloudStorageSettingsModule : HFItemModule <HUCameraSettingsModule> {
    NSSet * _cameraProfiles;
    HFItemProvider * _cloudStorageSectionSettingsItemProvider;
    NSSet * _itemProviders;
}

@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) HFItemProvider *cloudStorageSectionSettingsItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraProfiles;
- (id)cloudStorageSectionSettingsItemProvider;
- (id)didSelectItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2;
- (bool)isItemHeader:(id)arg1;
- (id)itemProviders;
- (id)removeAllCameraRecordings;

@end
