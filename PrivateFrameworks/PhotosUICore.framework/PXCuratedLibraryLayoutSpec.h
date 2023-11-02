
@interface PXCuratedLibraryLayoutSpec : PXFeatureSpec {
    PXCuratedLibrarySectionHeaderLayoutSpec * _allPhotosFloatingHeaderSpec;
    bool  _allowsPaginatedScrollingInYearsAndMonths;
    bool  _allowsSlideshowInYears;
    long long  _axis;
    PXCuratedLibrarySectionHeaderLayoutSpec * _daysTopHeaderSpec;
    double  _estimatedSpacingBetweenMonths;
    NSNumber * _inlineHeaderOverlayTopInsetOverride;
    double  _interbuttonSpacing;
    bool  _isTopSafeAreaFullyCovered;
    PXMonthsLayoutMetrics * _monthsLayoutMetrics;
    PXCuratedLibrarySectionHeaderLayoutSpec * _monthsTopHeaderSpec;
    PXAssetsSectionLayoutSpec * _sectionLayoutSpec;
    double  _spacingBetweenDays;
    double  _spacingBetweenHeaderLastBaselineAndAllPhotosTop;
    double  _spacingBetweenMonths;
    double  _spacingBetweenSafeAreaTopAndFirstMonthTitle;
    double  _spacingBetweenSafeAreaTopAndFirstYearCard;
    double  _spacingBetweenYears;
    PXExtendedImageConfiguration * _statusBarGradientImageConfiguration;
    long long  _variant;
    PXYearsLayoutMetrics * _yearsLayoutMetrics;
    PXCuratedLibrarySectionHeaderLayoutSpec * _yearsTopHeaderSpec;
}

@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *allPhotosFloatingHeaderSpec;
@property (nonatomic, readonly) bool allowsPaginatedScrollingInYearsAndMonths;
@property (nonatomic, readonly) bool allowsSlideshowInYears;
@property (nonatomic, readonly) long long axis;
@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *daysTopHeaderSpec;
@property (nonatomic, readonly) NSNumber *inlineHeaderOverlayTopInsetOverride;
@property (nonatomic, readonly) double interbuttonSpacing;
@property (nonatomic, readonly) bool isTopSafeAreaFullyCovered;
@property (nonatomic, readonly) PXMonthsLayoutMetrics *monthsLayoutMetrics;
@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *monthsTopHeaderSpec;
@property (nonatomic, readonly) PXAssetsSectionLayoutSpec *sectionLayoutSpec;
@property (nonatomic, readonly) double spacingBetweenHeaderLastBaselineAndAllPhotosTop;
@property (nonatomic, readonly) double spacingBetweenSafeAreaTopAndFirstMonthTitle;
@property (nonatomic, readonly) double spacingBetweenSafeAreaTopAndFirstYearCard;
@property (nonatomic, readonly) PXExtendedImageConfiguration *statusBarGradientImageConfiguration;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) PXYearsLayoutMetrics *yearsLayoutMetrics;
@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *yearsTopHeaderSpec;

- (void).cxx_destruct;
- (id)allPhotosFloatingHeaderSpec;
- (bool)allowsPaginatedScrollingInYearsAndMonths;
- (bool)allowsSlideshowInYears;
- (long long)axis;
- (id)daysTopHeaderSpec;
- (double)defaultInterlayoutSpacingForZoomLevel:(long long)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 variant:(long long)arg3;
- (id)inlineHeaderOverlayTopInsetOverride;
- (double)interbuttonSpacing;
- (bool)isTopSafeAreaFullyCovered;
- (id)monthsLayoutMetrics;
- (id)monthsTopHeaderSpec;
- (id)sectionLayoutSpec;
- (bool)shouldExcludeNonLibraryRelatedActionsFromTopLevelEllipsisMenuForZoomLevel:(long long)arg1;
- (double)spacingBetweenHeaderLastBaselineAndAllPhotosTop;
- (double)spacingBetweenSafeAreaTopAndFirstMonthTitle;
- (double)spacingBetweenSafeAreaTopAndFirstYearCard;
- (id)statusBarGradientImageConfiguration;
- (long long)variant;
- (id)yearsLayoutMetrics;
- (id)yearsTopHeaderSpec;

@end
