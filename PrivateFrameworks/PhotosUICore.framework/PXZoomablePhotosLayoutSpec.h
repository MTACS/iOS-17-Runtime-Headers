
@interface PXZoomablePhotosLayoutSpec : PXFeatureSpec {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _aspectFitEdgeMargins;
    double  _aspectFitInteritemSpacing;
    double  _captionSpacing;
    long long  _defaultNumberOfColumns;
    long long  _initialNumberOfColumns;
    PXZoomableInlineHeadersLayoutSpec * _inlineHeadersSpec;
    double  _interitemSpacing;
    double  _itemAspectRatio;
    double  _itemCornerRadius;
    NSArray * _legacyMacSupportedColumns;
    long long  _maxColumnsForBadges;
    long long  _maxColumnsForIndividualItems;
    long long  _maxColumnsForSaliency;
    long long  _maxColumnsForStickyHeaderDisplay;
    long long  _minColumnsForMiniBadges;
    NSArray * _minimumAssetsRequiredByColumn;
    double  _panoramaInteritemSpacing;
    double  _panoramaItemAspectRatio;
    long long  _preferredUserInterfaceStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _squareEdgeMargins;
    long long  _staticNumberOfColumns;
    NSArray * _supportedColumns;
    bool  _useSaliency;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } aspectFitEdgeMargins;
@property (nonatomic, readonly) double aspectFitInteritemSpacing;
@property (nonatomic, readonly) double captionSpacing;
@property (nonatomic, readonly) long long defaultNumberOfColumns;
@property (nonatomic, readonly) long long initialNumberOfColumns;
@property (nonatomic, readonly) PXZoomableInlineHeadersLayoutSpec *inlineHeadersSpec;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) double itemAspectRatio;
@property (nonatomic, readonly) double itemCornerRadius;
@property (nonatomic, readonly) NSArray *legacyMacSupportedColumns;
@property (nonatomic, readonly) long long maxColumnsForBadges;
@property (nonatomic, readonly) long long maxColumnsForIndividualItems;
@property (nonatomic, readonly) long long maxColumnsForSaliency;
@property (nonatomic, readonly) long long maxColumnsForStickyHeaderDisplay;
@property (nonatomic, readonly) long long minColumnsForMiniBadges;
@property (nonatomic, readonly) NSArray *minimumAssetsRequiredByColumn;
@property (nonatomic, readonly) double panoramaInteritemSpacing;
@property (nonatomic, readonly) double panoramaItemAspectRatio;
@property (nonatomic, readonly) long long preferredUserInterfaceStyle;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } squareEdgeMargins;
@property (nonatomic, readonly) long long staticNumberOfColumns;
@property (nonatomic, readonly) NSArray *supportedColumns;
@property (nonatomic, readonly) bool useSaliency;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })aspectFitEdgeMargins;
- (double)aspectFitInteritemSpacing;
- (long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1 allowedColumns:(id)arg2;
- (double)captionSpacing;
- (long long)defaultNumberOfColumns;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3 gridStyle:(long long)arg4 itemAspectRatio:(double)arg5 userDefaults:(id)arg6 forceSaliency:(bool)arg7 preferredUserInterfaceStyle:(long long)arg8 additionalAspectFitEdgeMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg9 overrideDefaultNumberOfColumns:(long long)arg10;
- (long long)initialNumberOfColumns;
- (id)inlineHeadersSpec;
- (double)interitemSpacing;
- (double)itemAspectRatio;
- (double)itemCornerRadius;
- (id)legacyMacSupportedColumns;
- (long long)maxColumnsForBadges;
- (long long)maxColumnsForIndividualItems;
- (long long)maxColumnsForSaliency;
- (long long)maxColumnsForStickyHeaderDisplay;
- (long long)minColumnsForMiniBadges;
- (id)minimumAssetsRequiredByColumn;
- (double)panoramaInteritemSpacing;
- (double)panoramaItemAspectRatio;
- (long long)preferredUserInterfaceStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })squareEdgeMargins;
- (long long)staticNumberOfColumns;
- (id)supportedColumns;
- (bool)useSaliency;

@end
