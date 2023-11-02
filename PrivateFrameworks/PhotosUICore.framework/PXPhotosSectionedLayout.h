
@interface PXPhotosSectionedLayout : PXGStackLayout <PXAssetSectionLayoutDelegate, PXBlurrableSectionsSource, PXChangeObserver, PXGCaptureSpriteSource, PXGSublayoutFaultingDelegate, PXGSublayoutProvider, PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> {
    PXAssetsDataSource * _assetsDataSource;
    <PXPhotosSectionBodyLayoutProvider> * _bodyLayoutProvider;
    NSIndexSet * _cachedSectionsWithSelectedItems;
    unsigned int  _captureSpriteIndex;
    long long  _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    <PXPhotosSectionHeaderLayoutProvider> * _headerLayoutProvider;
    struct { 
        bool invalidationDelegate; 
        bool floatingHeaderSnapshot; 
        bool configureSectionHeaderLayout; 
    }  _headerProviderRespondsTo;
    double  _horizontalScrollingHintFactor;
    double  _interSectionSpacing;
    bool  _isRecreatingContentLayouts;
    bool  _isUpdatingSublayouts;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _maskCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maskRect;
    long long  _numberOfForcedSections;
    PXGItemPlacement * _placementOverride;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _postUpdateFlags;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _preferredCornerRadius;
    PXSectionsBlurController * _sectionsBlurController;
    bool  _shouldRecreateBodyLayouts;
    bool  _shouldRecreateHeaderLayouts;
    PXPhotosLayoutSpec * _spec;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, retain) <PXPhotosSectionBodyLayoutProvider> *bodyLayoutProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PXPhotosSectionHeaderLayoutProvider> *headerLayoutProvider;
@property (nonatomic) double horizontalScrollingHintFactor;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } maskCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskRect;
@property (nonatomic, retain) PXGItemPlacement *placementOverride;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } preferredCornerRadius;
@property (nonatomic, retain) PXPhotosLayoutSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (bool)_configureSectionLayout:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)_createAnimationForChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3;
- (void)_forceSectionIfNeeded:(long long)arg1;
- (void)_invalidateCaptureSprite;
- (void)_invalidatePreferredCornerRadius;
- (void)_invalidateSectionsBlur;
- (void)_invalidateSublayoutTransforms;
- (void)_invalidateSublayoutsConfiguration;
- (void)_invalidateSublayoutsDataSource;
- (void)_invalidateSublayoutsSpec;
- (void)_performAddActionForSectionLayout:(id)arg1;
- (bool)_shouldFaultInSection:(long long)arg1 inDataSource:(id)arg2;
- (void)_updateCaptureSprite;
- (void)_updatePreferredCornerRadius;
- (void)_updateSectionsBlur;
- (void)_updateSublayoutGridConfiguratorForLayout:(id)arg1;
- (void)_updateSublayoutTransforms;
- (void)_updateSublayoutsConfiguration;
- (void)_updateSublayoutsDataSource;
- (void)_updateSublayoutsSpec;
- (bool)allowsDanglingUpdatesAssertions;
- (bool)allowsSublayoutUpdateCycleAssertions;
- (void)assetSectionLayoutDidConfigureLayouts:(id)arg1;
- (void)assetSectionLayoutDidUpdateVisibleRectOvershootFactor:(id)arg1;
- (id)assetsDataSource;
- (id)axSpriteIndexes;
- (unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)bodyLayoutProvider;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 type:(unsigned long long)arg2;
- (void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(struct CGSize { double x1; double x2; })arg3;
- (void)didUpdate;
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(id /* block */)arg1;
- (void)enumerateBlurrableSectionsIn:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 using:(id /* block */)arg2;
- (void)enumerateItemsGeometriesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dataSource:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)headerLayoutProvider;
- (double)horizontalScrollingHintFactor;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (double)interSectionSpacing;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (bool)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2;
- (id)layoutSnapshotDataSource;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })maskCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRect;
- (id)navigationObjectReferenceForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)arg1;
- (void)photosSectionHeaderLayoutInvalidateConfiguredLayouts:(id)arg1;
- (id)placementOverride;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })preferredCornerRadius;
- (id)presentedItemsGeometryForSection:(unsigned long long)arg1 inDataSource:(id)arg2;
- (void)setBlurIntensity:(double)arg1 forSectionAt:(long long)arg2;
- (void)setBodyLayoutProvider:(id)arg1;
- (void)setHeaderLayoutProvider:(id)arg1;
- (void)setHorizontalScrollingHintFactor:(double)arg1;
- (void)setInterSectionSpacing:(double)arg1;
- (void)setMaskCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setMaskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlacementOverride:(id)arg1;
- (void)setPreferredCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setSpec:(id)arg1;
- (bool)shouldApplyItemChangeDetailsToSublayout:(id)arg1;
- (bool)shouldApplySpriteTransformToSublayouts;
- (id)spec;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (id)topmostHeaderSnapshotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)update;
- (id)viewModel;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)willUpdate;

@end
