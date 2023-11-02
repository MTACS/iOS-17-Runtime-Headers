
@interface PUSharingErrorPresentationController : PUErrorPresentationController {
    NSDictionary * _itemSourcesByAssetUUID;
    long long  _preparationType;
    unsigned long long  _source;
}

@property (nonatomic, copy) NSDictionary *itemSourcesByAssetUUID;
@property (nonatomic, readonly) long long preparationType;
@property (nonatomic, readonly) unsigned long long source;

+ (id)_defaultTitleForDownloadErrorForAssets:(id)arg1 forSource:(unsigned long long)arg2;
+ (id)_defaultTitleForSource:(unsigned long long)arg1 assets:(id)arg2;
+ (id)_mediaSpecificMessageForKeyPrefix:(id)arg1 forAssets:(id)arg2;
+ (bool)errorIsDownloadError:(id)arg1;
+ (bool)errorIsLowDiskSpaceError:(id)arg1;
+ (bool)errorIsUserNeedsReviewCloudSettingsError:(id)arg1;
+ (long long)errorTypeFromSimulatedErrorType:(long long)arg1;
+ (long long)sharingErrorTypeFromError:(id)arg1;

- (void).cxx_destruct;
- (id)additionalRadarDescriptionLinesForAsset:(id)arg1;
- (void)configureAlertPropertiesFromError:(id)arg1 withAssets:(id)arg2 willShowFileRadarButton:(bool)arg3 alertCompletion:(id /* block */)arg4;
- (void)configureRadarPropertiesFromError:(id)arg1 withAssets:(id)arg2;
- (id)initWithErrors:(id)arg1 forAssets:(id)arg2 fromSource:(unsigned long long)arg3 preparationType:(long long)arg4;
- (id)itemSourcesByAssetUUID;
- (long long)preparationType;
- (void)setItemSourcesByAssetUUID:(id)arg1;
- (bool)shouldIncludeAssetInRadarDescription:(id)arg1;
- (bool)shouldShowFileRadarAction;
- (unsigned long long)source;

@end
