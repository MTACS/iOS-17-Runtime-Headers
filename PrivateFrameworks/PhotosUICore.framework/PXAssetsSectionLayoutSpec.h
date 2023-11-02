
@interface PXAssetsSectionLayoutSpec : PXFeatureSpec {
    bool  _allowsBlur;
    bool  _canShowSelectAllButton;
    PXDayAssetsSectionConfigurator * _daySectionConfigurator;
    bool  _disableConfigurators;
    PXAssetsSectionGridConfigurator * _gridConfigurator;
    PXMonthCardSectionConfigurator * _monthSectionConfigurator;
    PXMonthChapterSectionConfigurator * _monthsChapterConfigurator;
    long long  _numberOfLinesForShowAllButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    NSShadow * _shadow;
    double  _shadowCornerRadius;
    double  _showAllButtonHeight;
    bool  _userInterfaceStyleAllowsShadow;
    long long  _variant;
    PXYearAssetsSectionConfigurator * _yearSectionConfigurator;
    PXZoomablePhotosLayoutSpec * _zoomableSpec;
}

@property (nonatomic, readonly) bool allowsBlur;
@property (nonatomic, readonly) bool canShowSelectAllButton;
@property (nonatomic, readonly) bool disableConfigurators;
@property (nonatomic, readonly) long long numberOfLinesForShowAllButton;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) NSShadow *shadow;
@property (nonatomic, readonly) double shadowCornerRadius;
@property (nonatomic, readonly) double showAllButtonHeight;
@property (nonatomic, readonly) bool supportsGridAspectRatioToggle;
@property (nonatomic, readonly) bool userInterfaceStyleAllowsShadow;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) PXZoomablePhotosLayoutSpec *zoomableSpec;

- (void).cxx_destruct;
- (id)_configuratorForZoomLevel:(long long)arg1;
- (bool)allowsBlur;
- (bool)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)arg1;
- (bool)canShowSelectAllButton;
- (bool)disableConfigurators;
- (id)gridConfigurator;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 variant:(long long)arg3 allowsBlur:(bool)arg4;
- (long long)numberOfGridZoomStepsWithDataSource:(id)arg1;
- (long long)numberOfLinesForShowAllButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)sectionConfiguratorForAssetCollection:(id)arg1 inZoomLevel:(long long)arg2;
- (id)shadow;
- (double)shadowCornerRadius;
- (double)showAllButtonHeight;
- (bool)supportsGridAspectRatioToggle;
- (bool)userInterfaceStyleAllowsShadow;
- (long long)variant;
- (id)zoomableSpec;

@end
