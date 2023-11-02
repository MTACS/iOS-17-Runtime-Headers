
@interface PUErrorPresentationController : NSObject {
    NSArray * _additionalAlertActions;
    NSArray * _additionalQuestionsInRadarDescription;
    NSString * _alertMessage;
    NSString * _alertTitle;
    NSArray * _assets;
    NSString * _assetsListDescription;
    NSString * _dismissButtonTitle;
    NSArray * _errors;
    NSString * _radarComponentID;
    NSString * _radarComponentName;
    NSString * _radarComponentVersion;
    NSString * _radarDescription;
    NSString * _radarTitle;
}

@property (nonatomic, copy) NSArray *additionalAlertActions;
@property (nonatomic, copy) NSArray *additionalQuestionsInRadarDescription;
@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, copy) NSString *assetsListDescription;
@property (nonatomic, copy) NSString *dismissButtonTitle;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly, copy) NSString *radarComponentID;
@property (nonatomic, readonly, copy) NSString *radarComponentName;
@property (nonatomic, readonly, copy) NSString *radarComponentVersion;
@property (nonatomic, copy) NSString *radarDescription;
@property (nonatomic, copy) NSString *radarTitle;

+ (id)alertActionForNavigatingToDestination:(long long)arg1 withTitle:(id)arg2 completion:(id /* block */)arg3;
+ (bool)assetIsStandardVideo:(id)arg1;
+ (bool)errorIsAuthenticationRelatedCPLError:(id)arg1;
+ (bool)errorIsLowDiskSpaceRelatedCPLError:(id)arg1;
+ (bool)isNetworkRelatedError:(id)arg1;

- (void).cxx_destruct;
- (id)additionalAlertActions;
- (id)additionalQuestionsInRadarDescription;
- (id)additionalRadarDescriptionLinesForAsset:(id)arg1;
- (id)alertControllerWithCompletion:(id /* block */)arg1;
- (id)alertMessage;
- (id)alertTitle;
- (id)assets;
- (id)assetsDescriptionFromAssets:(id)arg1;
- (id)assetsListDescription;
- (void)configureAlertPropertiesFromError:(id)arg1 withAssets:(id)arg2 willShowFileRadarButton:(bool)arg3 alertCompletion:(id /* block */)arg4;
- (void)configureRadarPropertiesFromError:(id)arg1 withAssets:(id)arg2;
- (id)dismissButtonTitle;
- (id)errors;
- (id)initWithErrors:(id)arg1 forAssets:(id)arg2;
- (id)radarComponentID;
- (id)radarComponentName;
- (id)radarComponentVersion;
- (id)radarDescription;
- (id)radarTitle;
- (void)setAdditionalAlertActions:(id)arg1;
- (void)setAdditionalQuestionsInRadarDescription:(id)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setAssetsListDescription:(id)arg1;
- (void)setDismissButtonTitle:(id)arg1;
- (void)setRadarComponentID:(id)arg1 name:(id)arg2 version:(id)arg3;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarTitle:(id)arg1;
- (bool)shouldIncludeAssetInRadarDescription:(id)arg1;
- (bool)shouldShowFileRadarAction;

@end
