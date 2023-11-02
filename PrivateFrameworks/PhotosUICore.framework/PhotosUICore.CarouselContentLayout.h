
@interface PhotosUICore.CarouselContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider, PXGViewSource> {
    void displayedPageInfos;
    void displayedPageRange;
    void fullsizeFrameRectsStore;
    void layoutSpec;
    void maskingInsetsFraction;
    void mostFocusedPageChangeHandler;
    void mostFocusedPageIndex;
    void numberOfPages;
    void pageControlConfiguration;
    void pageControlSpriteIndex;
    void pageControlVersion;
    void pageInfoFetcher;
    void scrollPosition;
    void updater;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (void).cxx_destruct;
- (void)alphaDidChange;
- (id)axSpriteIndexes;
- (void)handlePageControl;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)update;
- (void)updateContent;
- (void)updateDisplayedPageRange;
- (void)updateDisplayedPages;
- (void)updatePageControl;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
