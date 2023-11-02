
@interface HUCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate> {
    HUCameraRecordingSettingsModule * _cameraRecordingItemModule;
    unsigned long long  _displayStyle;
}

@property (nonatomic, retain) HUCameraRecordingSettingsModule *cameraRecordingItemModule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraRecordingItemModule;
- (void)cameraRecordingSettingsModule:(id)arg1 didUpdateItem:(id)arg2;
- (unsigned long long)displayStyle;
- (void)setCameraRecordingItemModule:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;

@end
