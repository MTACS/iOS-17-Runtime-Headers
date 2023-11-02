
@interface PUWallpaperShortcutsPlaygroundSettings : PXSettings <PHPickerViewControllerDelegate> {
    bool  _previewEnabled;
    NSString * _selectedAssetIdentifier;
    NSString * _selectedConfigurationUUID;
    bool  _smartCropEnabled;
    bool  _useAssetURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool previewEnabled;
@property (nonatomic, retain) NSString *selectedAssetIdentifier;
@property (nonatomic, retain) NSString *selectedConfigurationUUID;
@property (nonatomic) bool smartCropEnabled;
@property (readonly) Class superclass;
@property (nonatomic) bool useAssetURL;

+ (void)_runActionWithModuleController:(id)arg1 photoLibrary:(id)arg2;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleLoadFileURL:(id)arg1;
- (id)parentSettings;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (bool)previewEnabled;
- (id)selectedAssetIdentifier;
- (id)selectedConfigurationUUID;
- (void)setDefaultValues;
- (void)setPreviewEnabled:(bool)arg1;
- (void)setSelectedAssetIdentifier:(id)arg1;
- (void)setSelectedConfigurationUUID:(id)arg1;
- (void)setSmartCropEnabled:(bool)arg1;
- (void)setUseAssetURL:(bool)arg1;
- (bool)smartCropEnabled;
- (bool)useAssetURL;

@end
