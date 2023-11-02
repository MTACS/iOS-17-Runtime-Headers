
@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalAspectFitEdgeMargins;
    NSArray * _availableThumbnailSizes;
    bool  _forceSaliency;
    long long  _gridStyle;
    double  _itemAspectRatio;
    long long  _overrideDefaultNumberOfColumns;
    long long  _preferredUserInterfaceStyle;
    <PXZoomablePhotosUserDefaults> * _userDefaults;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalAspectFitEdgeMargins;
@property (nonatomic, retain) NSArray *availableThumbnailSizes;
@property (nonatomic) bool forceSaliency;
@property (nonatomic) long long gridStyle;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) long long overrideDefaultNumberOfColumns;
@property (nonatomic) long long preferredUserInterfaceStyle;
@property (nonatomic, readonly) PXZoomablePhotosLayoutSpec *spec;
@property (nonatomic, retain) <PXZoomablePhotosUserDefaults> *userDefaults;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalAspectFitEdgeMargins;
- (id)availableThumbnailSizes;
- (id)createSpec;
- (bool)forceSaliency;
- (long long)gridStyle;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (double)itemAspectRatio;
- (long long)overrideDefaultNumberOfColumns;
- (long long)preferredUserInterfaceStyle;
- (void)setAdditionalAspectFitEdgeMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAvailableThumbnailSizes:(id)arg1;
- (void)setForceSaliency:(bool)arg1;
- (void)setGridStyle:(long long)arg1;
- (void)setItemAspectRatio:(double)arg1;
- (void)setOverrideDefaultNumberOfColumns:(long long)arg1;
- (void)setPreferredUserInterfaceStyle:(long long)arg1;
- (void)setPreferredUserInterfaceStyleForInlineAddButton:(long long)arg1;
- (void)setUserDefaults:(id)arg1;
- (bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (Class)specClass;
- (id)userDefaults;

@end
