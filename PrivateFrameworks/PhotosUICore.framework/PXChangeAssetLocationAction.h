
@interface PXChangeAssetLocationAction : PXAssetLocationAction {
    PXAnnotatedLocation * _annotatedLocation;
    CLLocation * _preciseLocation;
    bool  _shifted;
    long long  _sourceType;
}

@property (nonatomic, readonly) PXAnnotatedLocation *annotatedLocation;
@property (nonatomic, readonly) long long sourceType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)analyticsActionString;
- (id)analyticsPlaceLevelString;
- (id)annotatedLocation;
- (id)initWithAssets:(id)arg1 annotatedLocation:(id)arg2 sourceType:(long long)arg3;
- (id)locationForAsset:(id)arg1 shifted:(bool*)arg2;
- (long long)sourceType;

@end
