
@interface PXExploreLayoutMetrics : PXLayoutMetrics <PXGDiagnosticsProvider> {
    id /* block */  _acceptableLargeHeroPredicate;
    bool  _allowHeaders;
    bool  _allowSpecialPanoHeaders;
    double  _buildingBlockAspectRatio;
    double  _interitemSpacing;
    long long  _largeHeroDensity;
    long long  _layoutSubtype;
    long long  _layoutType;
    double  _preferredFullWidthHeaderAspectRatio;
    long long  _reorderingTolerance;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
}

@property (nonatomic, copy) id /* block */ acceptableLargeHeroPredicate;
@property (nonatomic) bool allowHeaders;
@property (nonatomic) bool allowSpecialPanoHeaders;
@property (nonatomic) double buildingBlockAspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long largeHeroDensity;
@property (nonatomic) long long layoutSubtype;
@property (nonatomic) long long layoutType;
@property (nonatomic) double preferredFullWidthHeaderAspectRatio;
@property (nonatomic) long long reorderingTolerance;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)acceptableLargeHeroPredicate;
- (bool)allowHeaders;
- (bool)allowSpecialPanoHeaders;
- (double)buildingBlockAspectRatio;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)initWithSpec:(id)arg1;
- (id)initWithUserInterfaceIdiom:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 referenceSize:(struct CGSize { double x1; double x2; })arg4 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
- (double)interitemSpacing;
- (long long)largeHeroDensity;
- (long long)layoutSubtype;
- (long long)layoutType;
- (double)preferredFullWidthHeaderAspectRatio;
- (long long)reorderingTolerance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setAcceptableLargeHeroPredicate:(id /* block */)arg1;
- (void)setAllowHeaders:(bool)arg1;
- (void)setAllowSpecialPanoHeaders:(bool)arg1;
- (void)setBuildingBlockAspectRatio:(double)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setLargeHeroDensity:(long long)arg1;
- (void)setLayoutSubtype:(long long)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setPreferredFullWidthHeaderAspectRatio:(double)arg1;
- (void)setReorderingTolerance:(long long)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
