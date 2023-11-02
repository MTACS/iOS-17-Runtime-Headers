
@interface _TtC12PhotosUICoreP33_E758434BD084CAD7BAF751273E20B07526EditSCAPReviewDetailLayout : PXGLayout <PXGDisplayAssetSource, PXGLayoutContentSource, PXGSolidColorSource, PXGStringSource> {
    void asset;
    void compositionController;
    void label;
    void labelSpriteVersion;
    void neutrinoStreamController;
    void updater;
    void viewModel;
    void viewModelObservation;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (void).cxx_destruct;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (void)displayScaleDidChange;
- (id)init;
- (void)referenceSizeDidChange;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)updateContent;
- (void)updateIfNeeded;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
