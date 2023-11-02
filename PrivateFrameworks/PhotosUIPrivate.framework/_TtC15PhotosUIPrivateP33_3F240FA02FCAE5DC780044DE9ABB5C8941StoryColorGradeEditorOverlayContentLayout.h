
@interface _TtC15PhotosUIPrivateP33_3F240FA02FCAE5DC780044DE9ABB5C8941StoryColorGradeEditorOverlayContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider> {
    void captionHeightsByRow;
    void hasVerticalScrollingContent;
    void previewClip;
    void previewClipTimeRange;
    void selectionSpritesIndexRange;
    void storyModelObservation;
    void sublayoutFrames;
    void updateFlags;
    void viewModel;
    void viewModelObservation;
}

@property (nonatomic, readonly) long long scrollableAxis;

- (void).cxx_destruct;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id*)arg3;
- (void)update;

@end
