
@interface PXAudioSettings : PXSettings {
    bool  _flexReturnOnlyLocalSongs;
    bool  _flexSimulateAssetFetchFailure;
    bool  _flexSimulateDownloadFailure;
    bool  _workaround80278485;
}

@property (nonatomic) bool flexReturnOnlyLocalSongs;
@property (nonatomic) bool flexSimulateAssetFetchFailure;
@property (nonatomic) bool flexSimulateDownloadFailure;
@property (nonatomic) bool workaround80278485;

+ (void)purgeFlexDataFromModuleController:(id)arg1;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)flexReturnOnlyLocalSongs;
- (bool)flexSimulateAssetFetchFailure;
- (bool)flexSimulateDownloadFailure;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setFlexReturnOnlyLocalSongs:(bool)arg1;
- (void)setFlexSimulateAssetFetchFailure:(bool)arg1;
- (void)setFlexSimulateDownloadFailure:(bool)arg1;
- (void)setWorkaround80278485:(bool)arg1;
- (bool)workaround80278485;

@end
