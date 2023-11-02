
@interface PUActivityItemSourceConfiguration : NSObject {
    NSString * _activityType;
    PHAsset * _asset;
    long long  _assetExportKind;
    PHAssetExportRequestOptions * _assetExportRequestOptions;
    unsigned long long  _maxFileSizeLimit;
    long long  _outputType;
    bool  _requiresAssetExport;
    struct { 
        bool excludeLiveness; 
        bool excludeLocation; 
        bool excludeCaption; 
        bool excludeAccessibilityDescription; 
        bool includeAllOriginalResources; 
        bool shareAsUnmodifiedOriginal; 
        long long preferredExportFormat; 
    }  _sharingPreferences;
    NSDictionary * _sharingVariants;
}

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) long long assetExportKind;
@property (nonatomic, readonly) PHAssetExportRequestOptions *assetExportRequestOptions;
@property (nonatomic, readonly) unsigned long long maxFileSizeLimit;
@property (nonatomic, readonly) long long outputType;
@property (nonatomic, readonly) bool requiresAssetExport;
@property (nonatomic) struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; } sharingPreferences;
@property (nonatomic, copy) NSDictionary *sharingVariants;

+ (id)_activitiesThatDontAllowRAW;
+ (id)_activitiesThatDontRequireAssetExport;
+ (id)_activitiesThatDontSupportMomentShareLinks;
+ (id)_activitiesThatOnlySupportMomentShareLinks;
+ (id)_activitiesThatSupportAssetBundles;
+ (id)_activitiesThatSupportHEIFHEVC;
+ (id)_activitiesThatSupportLivePhotoBundles;
+ (id)_activitiesThatSupportSpatial;
+ (bool)_dontAllowRAWForActivityType:(id)arg1;
+ (id)_photosActionSheetActivities;
+ (id)_photosInternalActivities;
+ (bool)_shouldExportAsUnmodifiedOriginalForActivityType:(id)arg1;
+ (id)_systemActivitiesThatDontSupportMomentShareLinks;
+ (id)descriptionForAssetExportKind:(long long)arg1;
+ (id)descriptionForOutputType:(long long)arg1;
+ (bool)isAssetBundleSupportedByActivityType:(id)arg1;
+ (bool)isIndividualItemPreparationSupportedByActivityType:(id)arg1;
+ (bool)isLivePhotoBundleSupportedByActivityType:(id)arg1;
+ (bool)isMomentShareLinkSupportedByActivityType:(id)arg1;
+ (unsigned long long)maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2;
+ (bool)shouldExcludeAlternateVariantForActivityType:(id)arg1;
+ (bool)shouldProvideAlternateVariantForActivityType:(id)arg1 forAsset:(id)arg2 inPreferredExportFormat:(long long)arg3 withAvailableSharingVariants:(id)arg4;
+ (bool)shouldProvideCompatibleFormatForActivityType:(id)arg1 forAsset:(id)arg2 inPreferredExportFormat:(long long)arg3 withAvailableSharingVariants:(id)arg4;
+ (bool)supportsAssetLocalIdentifierForActivityType:(id)arg1;

- (void).cxx_destruct;
- (void)_configure;
- (id)_customAccessibilityLabel;
- (bool)_requiresAssetExportForAsset:(id)arg1 forActivityType:(id)arg2;
- (bool)_requiresAssetsLibraryURLForAsset:(id)arg1 forActivityType:(id)arg2;
- (bool)_shouldFlattenSlomoVideoForActivityType:(id)arg1;
- (id)_videoExportFileTypeForActivityType:(id)arg1;
- (id)_videoExportPresetForActivityType:(id)arg1;
- (bool)_wantsAssetBundleForActivityType:(id)arg1;
- (bool)_wantsLivePhotoBundleForActivityType:(id)arg1;
- (id)activityType;
- (id)asset;
- (long long)assetExportKind;
- (id)assetExportRequestOptions;
- (id)initWithAsset:(id)arg1 availableSharingVariants:(id)arg2 activityType:(id)arg3 preferences:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; })arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (unsigned long long)maxFileSizeLimit;
- (long long)outputType;
- (bool)requiresAssetExport;
- (void)setActivityType:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setSharingPreferences:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; })arg1;
- (void)setSharingVariants:(id)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; })sharingPreferences;
- (id)sharingVariants;

@end
