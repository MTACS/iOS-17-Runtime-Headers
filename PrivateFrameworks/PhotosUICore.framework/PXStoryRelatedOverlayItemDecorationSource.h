
@interface PXStoryRelatedOverlayItemDecorationSource : PXStoryController <PXGSelectionDecorationSource> {
    PXStoryRelatedOverlayLayout * _decoratedLayout;
    long long  _selectedIndex;
    PXStoryViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) PXStoryRelatedOverlayLayout *decoratedLayout;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateSelectedRelatedIndex;
- (void)_updateSelectedRelatedIndex;
- (void)configureUpdater:(id)arg1;
- (id)decoratedLayout;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct { float x1; float x2; float x3; float x4; })overlayInsetsForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (void)setDecoratedLayout:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
