
@interface PXFeedItemDecorationSource : NSObject <PXGSelectionDecorationSource> {
    PXSectionedDataSource * _dataSource;
    PXGLayout * _decoratedLayout;
    PXFeedSectionContentLayout * _decoratedSectionContentLayout;
    long long  _section;
    PXSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) PXGLayout *decoratedLayout;
@property (nonatomic, readonly) PXFeedSectionContentLayout *decoratedSectionContentLayout;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long section;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2;
- (id)dataSource;
- (id)decoratedLayout;
- (id)decoratedSectionContentLayout;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct { float x1; float x2; float x3; float x4; })overlayInsetsForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (long long)section;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (id)selectionSnapshot;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)setDecoratedLayout:(id)arg1;
- (void)setSelectionSnapshot:(id)arg1;

@end
