
@interface SKUIBrowseItemPageSection : SKUIStorePageSection {
    SKUIBrowseItemComponent * _component;
    SKUIViewElementLayoutContext * _layoutContext;
}

@property (nonatomic, readonly) SKUIBrowseItemComponent *pageComponent;

- (void).cxx_destruct;
- (id)_imageForImageViewElement:(id)arg1 styleColor:(id)arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (id)pageComponent;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)willAppearInContext:(id)arg1;

@end