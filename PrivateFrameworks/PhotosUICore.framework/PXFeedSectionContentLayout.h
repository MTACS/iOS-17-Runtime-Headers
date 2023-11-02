
@interface PXFeedSectionContentLayout : PXGCompositeLayout <PXChangeObserver, PXGLayoutContentSource, PXGSublayoutProvider, PXTapToRadarDiagnosticProvider> {
    PXFeedAutoplayController * _autoplayController;
    PXSectionedDataSource * _dataSource;
    <PXFeedItemLayoutFactory> * _itemLayoutFactory;
    struct { 
        bool setItemLayoutShouldAutoplayContentVideoTimeRange; 
        bool setItemLayoutIsTouched; 
        bool setItemLayoutIsHovered; 
        bool shouldReloadItemLayoutForChangedItemFromIndexPathInDataSourceToIndexPathInDataSource; 
        bool configureItemLayoutForChangedItemFromIndexPathInDataSourceToIndexPathInDataSource; 
        bool decorationOverlayAnchorSpriteIndexForItemLayout; 
        bool itemPlacementControllerForItemReferenceItemLayout; 
    }  _itemLayoutFactoryRespondsTo;
    PXSectionedDataSourceChangeDetails * _lastChangeDetails;
    PXSectionedDataSource * _presentedDataSource;
    long long  _presentedRootLayoutOrientation;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXFeedViewModel * _viewModel;
}

@property (nonatomic, readonly) PXFeedAutoplayController *autoplayController;
@property (nonatomic, readonly) PXFeedSublayoutComposition *composition;
@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXFeedItemLayoutFactory> *itemLayoutFactory;
@property (nonatomic) long long presentedRootLayoutOrientation;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXFeedViewModel *viewModel;

- (void).cxx_destruct;
- (id /* block */)_handleHoverForItemAtIndex:(long long)arg1;
- (bool)_handlePresentMenuActionForIndex:(long long)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (bool)_handlePrimaryActionForItemAtIndex:(long long)arg1;
- (id /* block */)_handleTouchForItemAtIndex:(long long)arg1;
- (void)_invalidateAutoplayControllerParameters;
- (void)_invalidateCompositionParameters;
- (void)_invalidateFeedSublayouts;
- (void)_invalidatePresentedRootLayoutOrientation;
- (void)_updateAutoplayControllerParameters;
- (void)_updateCompositionParameters;
- (void)_updateFeedSprites;
- (void)_updateFeedSublayouts;
- (void)_updatePresentedRootLayoutOrientation;
- (double)alphaForSublayout:(id)arg1 atIndex:(long long)arg2;
- (id)autoplayController;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (bool)axShouldSearchLeafsInSubgroups;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)dataSource;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decorationOverlayRectForSpriteIndex:(unsigned int)arg1;
- (void)didUpdate;
- (void)didUpdateSublayouts;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)arg1;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (long long)itemForSpriteIndex:(unsigned int)arg1;
- (id)itemLayoutFactory;
- (id)itemPlacementControllerForItemReference:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (void)localHiddenSpriteIndexesDidChange;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)presentedRootLayoutOrientation;
- (long long)scrollableAxis;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setPresentedRootLayoutOrientation:(long long)arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)update;
- (id)viewModel;
- (void)visibleRectDidChange;
- (bool)wantsCustomAlphaForSublayouts;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)willUpdate;

@end
