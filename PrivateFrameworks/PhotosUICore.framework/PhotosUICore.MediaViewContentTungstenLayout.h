
@interface PhotosUICore.MediaViewContentTungstenLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider, PXGViewSource> {
    void analysisControllerObservation;
    void analysisSpriteIndex;
    void analysisSpriteMediaVersion;
    void representations;
    void transitionType;
    void updater;
    void viewModel;
    void viewModelObservation;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (void).cxx_destruct;
- (id)axSpriteIndexes;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (void)referenceSizeDidChange;
- (void)update;
- (void)updateRepresentationLayouts;
- (void)updateSprites;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
