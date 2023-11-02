
@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {
    long long  _contentSizeCategory;
    double  _displayScale;
    long long  _formFactor;
    long long  _layoutOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    long long  _layoutSizeClass;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    PXUpdater * _updater;
    long long  _userInterfaceIdiom;
    unsigned long long  _visibleChromeElements;
    long long  _windowOrientation;
}

@property (nonatomic) long long contentSizeCategory;
@property (nonatomic) double displayScale;
@property (nonatomic) long long formFactor;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutReferenceSize;
@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) unsigned long long visibleChromeElements;
@property (nonatomic) long long windowOrientation;

- (void).cxx_destruct;
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;
- (void)_invalidateLayoutSizeClass;
- (void)_invalidateSafeAreaInsets;
- (void)_setNeedsUpdate;
- (void)_updateLayoutReferenceSizeAndDisplayScale;
- (void)_updateLayoutSizeClass;
- (void)_updateSafeAreaInsets;
- (long long)contentSizeCategory;
- (void)didPerformChanges;
- (double)displayScale;
- (long long)formFactor;
- (id)initWithFormFactor:(long long)arg1 orientation:(long long)arg2 visibleChromeElements:(unsigned long long)arg3;
- (id)initWithLayoutSizeClass:(long long)arg1;
- (id)initWithViewController:(id)arg1;
- (long long)layoutOrientation;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (long long)layoutSizeClass;
- (long long)layoutSizeSubclass;
- (void)performChanges:(id /* block */)arg1;
- (void)registerObservations;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setContentSizeCategory:(long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setFormFactor:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutSizeClass:(long long)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void)setVisibleChromeElements:(unsigned long long)arg1;
- (void)setWindowOrientation:(long long)arg1;
- (void)unregisterObservations;
- (long long)userInterfaceIdiom;
- (unsigned long long)visibleChromeElements;
- (long long)windowOrientation;

@end
