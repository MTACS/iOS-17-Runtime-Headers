
@interface PXFeedContentLayout : PXGCompositeLayout <PXChangeObserver, PXGSublayoutProvider> {
    PXFeedItemDecorationSource * _decorationSource;
    PXSectionedDataSource * _presentedDataSource;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXFeedViewModel * _viewModel;
}

@property (nonatomic, readonly) PXGStackedSublayoutComposition *composition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PXFeedItemDecorationSource *decorationSource;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSectionedDataSource *presentedDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXFeedViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateCompositionParameters;
- (void)_invalidateFeedSectionSublayouts;
- (void)_invalidateFeedSelectionSnapshot;
- (void)_updateCompositionParameters;
- (void)_updateFeedSectionSublayouts;
- (void)_updateFeedSelectionSnapshot;
- (long long)anchoredSublayoutIndex;
- (id)decorationSource;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDirection:(unsigned long long)arg2;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)itemPlacementControllerForItemReference:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentedDataSource;
- (void)safeAreaInsetsDidChange;
- (long long)scrollableAxis;
- (void)setPresentedDataSource:(id)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)update;
- (id)viewModel;

@end
