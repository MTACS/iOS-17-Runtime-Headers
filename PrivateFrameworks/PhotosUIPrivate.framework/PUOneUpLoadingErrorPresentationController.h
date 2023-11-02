
@interface PUOneUpLoadingErrorPresentationController : PUErrorPresentationController

+ (id)_hardwareModelSpecificMessageForKeyPrefix:(id)arg1;
+ (id)_mediaSpecificMessageForKeyPrefix:(id)arg1 forAsset:(id)arg2;
+ (bool)errorIsDownloadError:(id)arg1;
+ (bool)errorIsLowDiskSpaceError:(id)arg1;
+ (long long)oneUpLoadingErrorTypeFromError:(id)arg1;

- (id)additionalRadarDescriptionLinesForAsset:(id)arg1;
- (void)configureAlertPropertiesFromError:(id)arg1 withAssets:(id)arg2 willShowFileRadarButton:(bool)arg3 alertCompletion:(id /* block */)arg4;
- (void)configureRadarPropertiesFromError:(id)arg1 withAssets:(id)arg2;
- (id)initWithError:(id)arg1 forAsset:(id)arg2;
- (bool)shouldShowFileRadarAction;

@end
