
@interface HUMultiCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate> {
    NSMutableArray * _cameraRecordingItemModules;
}

@property (nonatomic, retain) NSMutableArray *cameraRecordingItemModules;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraRecordingItemModules;
- (void)cameraRecordingSettingsModule:(id)arg1 didUpdateItem:(id)arg2;
- (void)setCameraRecordingItemModules:(id)arg1;

@end
