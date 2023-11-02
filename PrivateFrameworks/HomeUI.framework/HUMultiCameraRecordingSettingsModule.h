
@interface HUMultiCameraRecordingSettingsModule : HUCameraRecordingSettingsModule {
    bool  _shouldShowFooterTitle;
}

@property (nonatomic) bool shouldShowFooterTitle;

- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 displayStyle:(unsigned long long)arg3;
- (void)setShouldShowFooterTitle:(bool)arg1;
- (bool)shouldShowFooterTitle;

@end
