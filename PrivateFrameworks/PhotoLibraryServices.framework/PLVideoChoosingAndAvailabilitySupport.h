
@interface PLVideoChoosingAndAvailabilitySupport : NSObject {
    <PLVideoChoosingAssetInformation> * _assetInformation;
    <PLVideoResourceContext> * _context;
    <PLVideoChoosingOptions> * _options;
    NSMutableArray * _resourcesNeedingRepair;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) <PLVideoChoosingAssetInformation> *assetInformation;
@property (nonatomic, readonly) <PLVideoResourceContext> *context;
@property (nonatomic, readonly) <PLVideoChoosingOptions> *options;
@property (nonatomic, readonly) NSArray *resourcesNeedingRepair;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)_acceptableResourceVersions;
- (bool)_checkIsReallyLocallyAvailableAndAddToRepairListIfNeeded:(id)arg1;
- (id)_ensureOriginalsAreHighestQuality:(id)arg1;
- (long long)_optimalLoadingModeForResource:(id)arg1;
- (unsigned int)_videoQualityLevelForRequestFallbackToMediumPolicy:(long long*)arg1;
- (id)assetInformation;
- (id)chooseResourceWithLoadingMode:(long long*)arg1 needsAdjustmentData:(bool*)arg2 error:(id*)arg3;
- (id)context;
- (id)initWithContext:(id)arg1 assetInformation:(id)arg2 options:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (id)options;
- (id)resourcesNeedingRepair;
- (struct CGSize { double x1; double x2; })size;

@end
